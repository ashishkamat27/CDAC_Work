#include<iostream>
#include<conio.h>
using namespace std;

int sqr(int no)
{
	return no*no;
}

int main()
{
	int number;
	int (*sqrLocal)(int );
	sqrLocal=&sqr;
	cout<<"Please,Enter a Number : "<<endl;
	cin>>number;
	cout<<"Square is : "<<sqrLocal(number);

	getch();
	return 0;
}