include "classMatrix.h"         

	Matrix::Matrix(int amount_of_row, int amount_of_col)
{
	row = amount_of_row;
	col = amount_of_col;
	a = new double* [row];
	for (int i = 0; i < row; i++)
	{
		a[i] = new double [col]; 
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			a[i][j] = 0;
		}
	}
}

Matrix::Matrix(const Matrix& mat)
{
	row = mat.row;
	col = mat.col;
	a = new double* [row];
	for (int i = 0; i < row; i++)
	{
		a[i] = new double [col]; 
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			a[i][j] = mat.a[i][j];
		}
	}
}



Matrix::~Matrix()
{
	for (int i = 0; i < row; i++)
	{
		delete [] a[i];
	}
	delete [] a;
}
