#include<iostream.h>
class MyClass
{
	private:
		int num;
		static int val;
	public:
		void setNum(int);
		int getNum();
		static int getVal()
		{
			return val;
		}
};
int MyClass::val=5;
void MyClass::setNum(int k)
		{
			this->num=k;
		}
int  MyClass::getNum()
		{
			return num;
		}
void main()
{
	MyClass *m=new MyClass;
	m->setNum(30);
	cout<<endl<<m->getNum()<<endl;
	(*m).setNum(90);
	cout<<endl<<(*m).getNum()<<endl;
	cout<<MyClass::getVal()<<endl;

}




