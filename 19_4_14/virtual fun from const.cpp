#include<iostream.h>
class base
{
public:
	base()
	{
		disp();// it will invoke base disp bec, sub class is not yet constructed completely.
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
}