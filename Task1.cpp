// ��� ��������� �������� ³��볺�.
//

#include "stdafx.h"
#include "iostream"
#include "fstream"
#include "string"
using namespace std;
int main()
{
	string data;
	setlocale(LC_ALL, "Ukrainian");
	cout<<"                 ***********************************"<<endl
		<<"                 **                               **"<<endl
		<<"                 **  �������� ��� ����� ���� i   **"<<endl
		<<"                 ** �������� ���� � ������������  **"<<endl
		<<"                 **    �i������������� �����      **"<<endl
		<<"                 **                               **"<<endl
		<<"                 **         (c) Vitaliy           **"<<endl
		<<"                 ***********************************"<<endl<<endl;
	ifstream infile("data.txt");
	if (!infile)
		cerr<<"���� �� �i�������";
	else
		infile<<data<<endl;
		

	system("pause");
	return 0;
}