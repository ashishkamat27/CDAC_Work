#include<iostream.h>
#include<malloc.h>
class MyClass
{
private:
	int num;
public:
	MyClass()
	{
		num=0;
		cout<<endl<<"in def const\n";
	}
	MyClass(int k)
	{
		num=k;
		cout<<endl<<"in param const\n";
	}
	void disp()
	{
		cout<<endl<<num<<endl;
	}
	~MyClass()
	{
		cout<<endl<<"dest called\n";
	}
	void* operator new(unsigned int size)
	{
		cout<<endl<<"in customized new\n";
		void *ptr;
		cout<<"\nbefore malloc\n";
		ptr=malloc(size);
		cout<<"\nafter malloc\n";
//		cout<<"num is\t"<<num<<endl; Error , function is treated as static
		return ptr;
	}
	void operator delete(void *ptr)
	{
		cout<<endl<<"in customized delete\n";
		free(ptr);
	}
	void* operator new[](unsigned int size)
	{
		cout<<endl<<"in customized new for array\n";
		void *ptr;
		ptr=malloc(size);
		return ptr;
	}
	void operator delete[](void *ptr)
	{
		cout<<endl<<"in customized delete for array\n";
		free(ptr);
	}
};
void main()
{
	MyClass *m=new MyClass(30);
	m->disp();
	delete m;
	MyClass *m1=new MyClass[3];
	for(int i=0;i<3;i++)
	{
		m1[i].disp();
	}
	delete []m1;
	
}