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
		 <<"                 **    Ця програма зчитує файл    **"<<endl
		 <<"                 ** text.txt i виводить його данi **"<<endl
		 <<"                 ** в 16-ковiй системi числення.  **"<<endl
		 <<"                 **                               **"<<endl  
		 <<"                 **                               **"<<endl
		 <<"                 **           2013. Vitaliy       **"<<endl
		 <<"                 ***********************************"<<endl<<endl
		 <<endl<<"Данi з файлу в шiстнадцятковiй системi числення: ";


ifstream infile("text.txt");
if (!infile)
	cerr<<"Файл не вiдкрився!"<<endl;
else
	while (infile>>data)
	cout<<hex<<(int)data<<" ";
	cout<<endl;
	system("pause");
	return 0;
} 