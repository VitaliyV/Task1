// Код написаний Васьківом Віталієм.
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
		<<"                 **  Програма яка зчитує файл i   **"<<endl
		<<"                 ** виводить його в посимвольних  **"<<endl
		<<"                 **    шiстнадцяткових кодах      **"<<endl
		<<"                 **                               **"<<endl
		<<"                 **         (c) Vitaliy           **"<<endl
		<<"                 ***********************************"<<endl<<endl;
	ifstream infile("data.txt");
	if (!infile)
		cerr<<"Файл не вiдкрився";
	else
		infile<<data<<endl;
		

	system("pause");
	return 0;
}