#include "stdafx.h"
#include "conio.h"
#include <iostream>
#include "ciclofor.h"
using namespace std;



void main()
{ 
	ciclofor ciclofor1, ciclofor2;
	float np,ef,p1,p2,p3;
	float nf;
	cout<< " Introduzca la nota practica: " ;
	cin>> np;
	cout<< " Introduzca la nota de los tres parciales: " ;
	cin>> p1;
	cin>> p2;
	cin>> p3;
	cout<< " Introduzca la nota del examen final: ";
	cin>> ef;

	cout<< " La nota final es: "<<ciclofor1.notas(np, p1, p2, p3, ef)<<endl;
	getch();
}
