// ejemplo.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include "conio.h"
#include "matriz.h"  //Declarar el header de la clase

#define FIL 50
#define COL 50

using namespace std;

void main(){
	int mat[50][50], n, m, op;
	matriz matriz1;
	do{
		cout<<"Ingrese el numero de la filas";
		cin>>n;
		}while((n>FIL) || (n<=0));
	do{
		cout<<"Ingrese el numero de columnas";
		cin>>m;
	}while((m>COL) || (m<=0));
		do{
			cout<<"-----       M E N U        -----"<<endl;
		    cout<<"|1.- Cargar Matriz.            |"<<endl;
		    cout<<"|2.- Mostrar Matriz.           |"<<endl;
		    cout<<"|3.- Ordenar Matriz.           |"<<endl;
			cout<<"|4.- Sumar Fila.               |"<<endl;
		    cout<<"|0.- Salir                     |"<<endl;
		    cout<<"--------------------------------"<<endl;
		    cout<<" Elija una opcion"<<endl;
            cin>>op;
			switch(op){
				case 1:
					matriz1.cargarmatriz(mat,n,m);
					break;
				case 2:
					matriz1.mostrarmatriz(mat,n,m);
					break;
				case 3:
					matriz1.ordenarmatriz(mat,n,m);
					break;
				case 4: 
					matriz1.promediofila(mat,n,m);
					break;
				case 0:
					cout<<"SALIR"<<endl;
					break;
				default:
					cout<<"ERROR: OPCION NO VALIDA..."<<endl;
					break;
			}
		}while(op!=0);
		getch();
}
					





