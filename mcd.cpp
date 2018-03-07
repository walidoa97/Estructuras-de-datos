#include "StdAfx.h"
#include "mcd.h"


mcd::mcd(void)
{
	a=2;
	b=1;

}
mcd::~mcd(void)
{
}
int mcd::calcular(int a, int b){
	if (b==0)
		return a;
	else
		return (b, a % b);
}
