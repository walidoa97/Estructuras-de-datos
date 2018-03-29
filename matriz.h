#pragma once
class matriz
{
private:
	int mat[50][50], n, m; 
public:
	matriz(void);
	~matriz(void);
	void cargarmatriz(int mat[50][50],int n, int m);
    void mostrarmatriz(int mat[50][50],int n, int m);
	void ordenarmatriz(int mat[50][50],int n, int m);
	void promediofila(int mat[50][50], int n, int m);
};

