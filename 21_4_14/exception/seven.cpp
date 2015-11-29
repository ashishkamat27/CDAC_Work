#include<iostream.h>
class MyClass
{
public:
	MyClass()
	{
		cout<<endl<<"In def const\n";
	}
	MyClass(MyClass &y)
	{
		cout<<endl<<"In copy const\n";
	}
	~MyClass()
	{
		cout<<endl<<"In MyClass dest\n";
	}
};
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
	else if(k%2!=0)
	{
		MyClass m;
		throw m;
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
	catch(...) // in order to catch any types
	{
		cout<<endl<<"ERROR: You must have passed either zero,negative or odd\n";
	}
	cout<<endl<<"The Result is\t"<<res<<endl;
}