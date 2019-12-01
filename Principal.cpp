#include<iostream>
#include <stdlib.h>
#include <conio.h>
#include "ListasDobles.h"
#include "Nodo.h"
#include "Calificacion.h"
using namespace std;

int main (int argc, char *argv[]) {
	int opc;
	ListasDobles *lista = new ListasDobles();
	Calificacion *calificacion;
	Nodo *nodo;
	int carnet=0;
	string codigoCurso="";
	double nota=0;
	int posicion=0;
	
	
	do{
		
		system("cls");
		cout<<"\t** MENU INICIO **\n"<<endl;
		cout<<"1. Insertar al inicio"<<endl;
		cout<<"2. Insertar al final "<<endl;
		cout<<"3. Calcular promedio"<<endl;
		cout<<"4. Insertar en posicion"<<endl;
		cout<<"5. Imprimir inverso"<<endl;
		cout<<"6. Contar cursos"<<endl;
		cout<<"7. Imprimir info de un curso"<<endl;
		cout<<"0. Salir"<<endl;

		
		cin>>opc;
		switch(opc)
		{
		case 1:
			
			break;
			
		case 2:

			break;
			
		case 3:

			break;
			
		case 4:
			break;
			
		case 5:
			
			
			break;
			
		case 6:
			
			break;
			
		case 7:
	        break;
		}
		
	}while(opcion!=0);
	
	return 0;
}
