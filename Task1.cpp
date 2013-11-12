// Код написаний Васьківом Віталієм.
//

#include "stdafx.h"
#include "iostream"
#include "stdio.h"

using namespace std;
int main()
{
int f;
double s;
		setlocale(LC_ALL, "Ukrainian");
	cout<<"                 ***********************************"<<endl
		<<"                 **                               **"<<endl
		<<"                 **  Програма яка перетворює      **"<<endl
		<<"                 ** введене число в 16-ковий код. **"<<endl
		<<"                 **                               **"<<endl
		<<"                 **                               **"<<endl
		<<"                 **         (c) Vitaliy           **"<<endl
		<<"                 ***********************************"<<endl<<endl
		<<"Введiть цiле число: ";

cin>>f;
printf("Ваше число в 16-ковому форматi = %x",f); 

cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	system("pause");
	return 0;
}