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
		 <<"               ****    �� �������� ����� ����    *****\n"
		 <<"             ****** data.txt i �������� ���� ���i *******\n"
		 <<"            *******       � ASCII ���i.           ********\n"
		 <<"             ******                               *******\n" 
		 <<"               ****                               *****\n"
		 <<"                ***           2013. Vitaliy       ***\n"
		 <<"                 ***********************************\n\n\n";
		 


ifstream infile("data.txt");
if (!infile)
	cerr<<"���� �� �i�������! �����i��� ����� ����� (������� ���� data.txt)"<<endl;
else
	cout<<"���i � ����� � ASCII ���i: ";
	while (infile>>data)
	cout<<hex<<(int)data<<" ";
	cout<<endl;

	system("pause");
	return 0;
} 