#include<iostream.h>
int sqr(int k)
{
	if(k<0)
	{
		throw "negative is not allowed"; //throwing an exception to the caller
	}
	else if(k==0)
	{
		throw k;
	}
	else
	{
		return k*k;
	}
}
void main()
{
	int num,res=0;
	cout<<endl<<"enter a number to calculate square\n";
	cin>>num;
	try
	{
		res=sqr(num);
	}
	catch(char *ptr)
	{
		cout<<endl<<"Error is\t"<<ptr<<endl;
	}
	catch(int p)
	{
		cout<<endl<<"Error is\t"<<p<<endl;
	}
	cout<<endl<<"Result is \t"<<res<<endl;
}