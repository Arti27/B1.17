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

int Matrix::getAmountOfRows() const
{
	return row;
}

int Matrix::getAmountOfColumns() const
{
	return col;
}
double& Matrix::element(int row_i, int col_j)
{
	return a[row_i][col_j];
}
double Matrix::Opredel_Matr() const
{
	int i,j,k;
	double det=1;
	for(i=0;i<this->row;i++)
	{
		for(j=i+1;j<this->row;j++)
		{
			if(this->a[i][i]==0)
				return 0;
			double b=this->a[j][i]/this->a[i][i];
			for(k=i;k<this->row;k++)
				this->a[j][k]=this->a[j][k]-this->a[i][k]*b;
		}
		det*=this->a[i][i];
	}
	return det;
}