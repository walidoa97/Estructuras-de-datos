#include "StdAfx.h"
#include "ciclofor.h"

ciclofor::ciclofor(void)
{
	np=20;
	p1=40;
	p2=5;
	p3=20;
	ef=98;
}

ciclofor::~ciclofor(void)
{
}

float ciclofor::notas(float np,float p1,float p2,float p3,float ef){
	float nf;
	nf=np*0.2+((p1+p2+p3)/3)*0.4+ef*0.4;
  	return (nf);
}
