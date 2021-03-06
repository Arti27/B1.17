#pragma once
#ifndef classMatrix_h
#define classMatrix_h

#include <iostream>

using namespace std;

class Matrix
{
	
	friend istream& operator>>(istream& in, Matrix& mat);
	friend ostream& operator<<(ostream& out, const Matrix& mat);
private:
	double** a;
	int row, col;
public:
	double Opredel_Matr() const;
	void Inversion() const;
	Matrix(int amount_of_row, int amount_of_col);
	Matrix(const Matrix& mat);
	~Matrix();
	int getAmountOfRows() const;
	int getAmountOfColumns() const;
	double& element(int row_i, int col_j);
	void operator=(const Matrix& mat);
	Matrix operator*(const Matrix& mat) const;
	Matrix operator*(double num) const;
};
#endif