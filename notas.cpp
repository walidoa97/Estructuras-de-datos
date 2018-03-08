#include "StdAfx.h"
#include "notas.h"

notas::notas(void)
{
	np=20;
	p1=40;
	p2=5;
	p3=20;
	ef=98;
}

notas::~notas(void)
{
}

float notas::notas(float np,float p1,float p2,float p3,float ef){
	float nf;
	nf=np*0.2+((p1+p2+p3)/3)*0.4+ef*0.4;
  	return (nf);
}
