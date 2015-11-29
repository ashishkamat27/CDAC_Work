#include<iostream.h>
class base
{
public:
	virtual void disp()
	{
		cout<<"in base disp"<<endl;
	}
	~base()
	{
		disp(); // by the time u come in base destructor , ur child class members are eligible for destruction,hence no way it will invoke sub class disp function.
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
	delete b;
}