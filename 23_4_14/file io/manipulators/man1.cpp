//width() member function manages output width.
// we can specify column of no.of characters wide
#include<iostream>
#include<iomanip>
using namespace std;
void main()
{
	double arr[]={1.23,35.45,786.45,1234.333};
	for(int i=0;i<4;i++)
	{
		cout.width(10);
		cout<<arr[i]<<endl;
	}
	char str[]="hello world";
	cout.width(40);
	cout.fill('*');
	cout<<str<<endl;

	char str1[]="hello world";
	cout.width(40);
	cout.setf(ios::left);
	cout.fill('*');
	cout<<str1<<endl;

	float fl=34.68f;
	cout.precision(4);
	cout.setf(ios::fixed);
	
	cout<<endl<<fl<<endl;
	
	double dd=34.567;
	cout<<endl<<dd<<endl;

	cout.precision(9);
	cout<<endl<<dd<<endl;
	
}


















