// 
//

#include "stdafx.h"
#include "iostream"
#include "fstream"
using namespace std;

int main()
{
 unsigned char	data; 


		setlocale(LC_ALL, "Ukrainian");
     cout<<"                 ***********************************\n" 
		 <<"                ***                               ***\n"
		 <<"               ****    Ця програма зчитує файл    *****\n"
		 <<"             ****** data.txt i виводить його данi *******\n"
		 <<"            *******       в ASCII кодi.           ********\n"
		 <<"             ******                               *******\n" 
		 <<"               ****                               *****\n"
		 <<"                ***           2013. Vitaliy       ***\n"
		 <<"                 ***********************************\n\n\n";
		 


ifstream infile("data.txt");
if (!infile)
	cerr<<"Файл не вiдкрився! Перевiрте назву файлу (повинна бути data.txt)"<<endl;
else
	cout<<"Данi з файлу в ASCII кодi: ";
	while (infile>>data)
	cout<<hex<<(int)data<<" ";
	cout<<endl;

	system("pause");
	return 0;
} 