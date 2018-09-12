#include <iostream>
#include <conio.h>
using namespace std;
struct Nodo{
	int dato;
	struct Nodo *siguiente;
}*inicio,*aux,*actual;
void insertarNodo(int);//Prototipos
void mostrarNodos();//Prototipos
int main(int argc, char** argv){
	inicio=NULL;
	
	insertarNodo(10);
	insertarNodo(20);
	insertarNodo(30);
	insertarNodo(40);
	mostrarNodos();
	cin.get();
	return 0;
}
void insertarNodo(int valor){
	actual=inicio;
	
		if (actual==NULL){
		    aux= new Nodo();
		    aux->dato=valor;
		    aux->siguiente=NULL;
		    inicio=aux;		
	    }else{
	
		 while (actual->siguiente!=NULL){
		 	actual=actual->siguiente;
		 }
			
				aux=new Nodo();
				aux->dato=valor;
				aux->siguiente=NULL;
				actual->siguiente=aux;	   		
	} 	
}
void mostrarNodos(){
	actual=inicio;
	while(actual!=NULL){
		cout<<" -> "<<actual->dato<<" "<<endl;
		actual=actual->siguiente;
	}
}

