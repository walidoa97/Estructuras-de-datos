#include "StdAfx.h"

#include "matriz.h"

#include "iostream"

using namespace std;



matriz::matriz(void)

{

	mat[50][50]=0;

	n=0;

	m=0;

}





matriz::~matriz(void)

{

}



void matriz::cargarmatriz(int mat[50][50], int n, int m)

{

	for ( int i=0; i<n; i++)

	{

		for ( int j=0; j<m; j++)

		{

			cout<< "   Ingrese el dato Mat["<<i<<"]["<<j<<"]  : ";

			cin>> mat[i][j];

		}

	}

}



void matriz::mostrarmatriz (int mat[50][50], int n, int m)

{

	cout<< "La Matriz es : "<<endl;

	for ( int i=0; i<n; i++)

	{

		for ( int j=0; j<m; j++)

		{

			cout<<"  "<<mat[i][j]<< " ";

		}

		cout<<endl;

	}

}



void matriz::ordenarmatriz(int mat[50][50],int n, int m)
{
int aux;
	for ( int i=0; i<n; i++)
	{
		for (int j=0; j<m; j++)
		{
			for (int s=j; s<m; s++)
			{
				for(int f=i; f<n; f++)
				{

				if (mat[i][j]>mat[f][s])

				{

					aux         = mat[i][j];

					mat[i][j]   = mat[f][s];

					mat[f][s]   = aux;

				}
				}

			}

		}

	}

}

 

void matriz::promediofila(int mat[50][50], int n, int m)

{

	for(int i=0;i<n;i++)

	{

      float con=0;

      for(int j=0;j<n;j++)

	  {

        con+=mat[i][j]/n;

      }

	  cout<<"El promedio de la fila "<<i<<" es: "<<con<<endl;

	}

}
