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
	int row, collate;
public:
	double Opredel_Matr() const;
	void Inversion() const;
	Matrix(int amount_of_row, int amount_of_col);
	Matrix(const Matrix& mat);
	~Matrix();
};