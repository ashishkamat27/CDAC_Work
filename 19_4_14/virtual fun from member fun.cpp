#include<iostream>
#pragma pack(1)
using namespace std;
class base
{
public:
	void fun()
	{
		disp(); // late binding bec u r invoking virtual method
	}
	virtual void disp()
	{
		cout<<"in base disp"<<endl;
	}
};
class sub: public base
{
public:
	void disp()
	{
		cout<<"in sub disp"<<endl;
	}
};
void main()
{
	base *b=new sub;
	b->disp(); // late binding
	b->fun(); // early binding
	base b1;
	b1.fun();// early binding

}
	




