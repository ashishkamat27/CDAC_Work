#include<iostream>
using namespace std;
#pragma pack(1)
class myclass
{
private:
	 int num;
public:
	void setNum(int num)
	{
		this->num=num;
	}
	int getNum()
	{
		return num;
	}
};
void main()
{
	myclass m;
	m.setNum(100);
	cout<<m.getNum()<<endl;
	int *ptr=(int*)&m;
	*ptr=500;
	cout<<m.getNum()<<endl;

}








	
