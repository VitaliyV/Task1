// ��� ��������� �������� ³��볺�.
//

#include "stdafx.h"
#include "iostream"
#include "fstream"
using namespace std;

int main()
{
	
int data; 


		setlocale(LC_ALL, "Ukrainian");
     cout<<"                 ***********************************"<<endl 
		 <<"                 **                               **"<<endl
		 <<"                 **    �� �������� ����� ����    **"<<endl
		 <<"                 ** text.txt i �������� ���� ���i **"<<endl
		 <<"                 **   16-���i� ������i ��������.  **"<<endl
		 <<"                 **     �������� ������ ���� �    **"<<endl
		 <<"                 **        �i���� �������         **"<<endl  
		 <<"                 **         (c) Vitaliy           **"<<endl
		 <<"                 ***********************************"<<endl<<endl
		 <<endl<<"���i � ����� � �i�����������i� ������i ��������: ";


ifstream infile("text.txt");
if (!infile)
	cerr<<"���� �� �i�������!"<<endl;
else
	while (infile>>data)
	cout<<hex<<data<<" ";
	cout<<endl;
	system("pause");
	return 0;
}