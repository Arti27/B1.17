#include "classMatrix.h"
#include <iostream>
#include <fstream>

int main()
{
	using namespace std;

	ifstream fin;
	fin.open("input.txt");
	int n;
	fin>>n>>n;
	Matrix A(n, n);
	fin >> A;
	cout<<"A*A*A:\n";
	cout<<A*A*A;
	ofstream fout;
	fout.open("output.txt");
	Matrix B(n,n);
	B=A*A;
	fout<<B<<'\n';
	B=B*A;
	fout<<B<<'\n';
	B=A;
	fout<<A.Opredel_Matr()<<'\n'<<'\n';	
	B.Inversion();
	fout<<B;
	fin.close();
	fout.close();
	return 0;
}