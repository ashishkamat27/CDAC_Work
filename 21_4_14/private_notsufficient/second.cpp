#include<iostream>
using namespace std;
#pragma pack(1)
class myclass
{
private:
	 int num;
	 int data;
public:
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
};
void main()
{
	myclass m;
	m.setNum(100);
	cout<<m.getNum()<<endl;
	m.setData(140);
	cout<<m.getData()<<endl;
	int *ptr=(int*)&m;
	*ptr=500;
	ptr++;
	*ptr=600;
	cout<<m.getNum()<<endl;
	cout<<m.getData()<<endl;

}






	
