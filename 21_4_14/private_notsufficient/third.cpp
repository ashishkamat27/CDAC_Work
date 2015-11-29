#include<iostream>
using namespace std;
#pragma pack(1)
class myclass
{
private:
	 int num;
	 int data;
	 const int var;
public:
	myclass():var(90)
	{
		cout<<"in no arg const"<<endl;
	}
	void setNum(int num)
	{
		this->num=num;
	}
	int getNum()
	{
		return num;
	}
	void setData(int data)
	{
		this->data=data;
	}
	int getData()
	{
		return data;
	}
	int getVar()
	{
		return var;
	}
};
void main()
{
	myclass m;
	cout<<"size of m is\t"<<sizeof(m)<<endl;
	m.setNum(100);
	cout<<m.getNum()<<endl;
	m.setData(140);
	cout<<m.getData()<<endl;
	cout<<m.getVar()<<endl;
	int *ptr=(int*)&m;
	*ptr=500;
	ptr++;
	*ptr=600;
	ptr++;
	*ptr=700; // even const can be changed
	cout<<m.getNum()<<endl;
	cout<<m.getData()<<endl;
	cout<<m.getVar()<<endl;

}
	
