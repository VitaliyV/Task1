// Код написаний Васьківом Віталієм.
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
		 <<"                 **    Ця програма зчитує файл    **"<<endl
		 <<"                 ** text.txt i виводить його данi **"<<endl
		 <<"                 **   16-ковiй системi числення.  **"<<endl
		 <<"                 **     Програма працює лише з    **"<<endl
		 <<"                 **        цiлими числами         **"<<endl  
		 <<"                 **         (c) Vitaliy           **"<<endl
		 <<"                 ***********************************"<<endl<<endl
		 <<endl<<"Данi з файлу в шiстнадцятковiй системi числення: ";


ifstream infile("text.txt");
if (!infile)
	cerr<<"Файл не вiдкрився!"<<endl;
else
	while (infile>>data)
	cout<<hex<<data<<" ";
	cout<<endl;
	system("pause");
	return 0;
}