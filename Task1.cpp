// 
//

#include "stdafx.h"
#include "iostream"
#include "fstream"
using namespace std;

int main()
{
 char	data; 


		setlocale(LC_ALL, "Ukrainian");
     cout<<"                 ***********************************"<<endl 
		 <<"                 **                               **"<<endl
		 <<"                 **    �� �������� ����� ����    **"<<endl
		 <<"                 ** text.txt i �������� ���� ���i **"<<endl
		 <<"                 ** � 16-���i� ������i ��������.  **"<<endl
		 <<"                 **                               **"<<endl  
		 <<"                 **                               **"<<endl
		 <<"                 **           2013. Vitaliy       **"<<endl
		 <<"                 ***********************************"<<endl<<endl
		 <<endl<<"���i � ����� � �i�����������i� ������i ��������: ";


ifstream infile("text.txt");
if (!infile)
	cerr<<"���� �� �i�������!"<<endl;
else
	while (infile>>data)
	cout<<hex<<(int)data<<" ";
	cout<<endl;
	system("pause");
	return 0;
} 