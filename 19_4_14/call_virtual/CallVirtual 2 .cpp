#include<iostream.h>
class myclass
{
public:
	virtual ~myclass()
	{
		cout<<"in myclass dest"<<endl;
	}
	virtual void disp1()
	{
		cout<<endl<<"in disp1\n";
	}
	void trial()
	{
		int *ptr1=(int*)this;//address of the object
		ptr1=(int*)*ptr1;//base address of the VTABLE
		ptr1++;
		ptr1=(int*)*ptr1;//address of the first virtual function
		void (*fun1)();
		fun1=(void (*)())ptr1;
		fun1();
	}
};
void main()
{
	myclass *m=new myclass;
	m->trial();
}
