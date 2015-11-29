#include<iostream>
using namespace std;
#include "D:\extra\Math_c.h"
void main()
{
	int no,number;
	Math obj(number);
	cout<<"////////Welcome user Which action do you want to perform//////";
	cout<<"Enter Number to perform action";
	cin>>number;
	cout<<"Enter 1 for Square";
	cout<<"Enter 2 for Double";
	cout<<"Enter 3 for Positive";
	cin>>no;
	switch(no)
	{
	case 1: obj.getsquare();
		break;
	case 2:obj.getdouble_no();
		break;
	case 3:obj.getpositive();
		break;
	default:cout<<"Invalid Input";
	}
}