#include<iostream>
#include<list>
#include<time.h>
using namespace std;
void main()
{
	list<int> l1;
	int i;
	long *ptr=NULL;
	//srand(time(ptr)); //Initialize random number
	srand(time(NULL));
	for(i=0;i<10;i++)
	{
		l1.push_back(rand()); //rand() is to generate random //nos.
	}
	list<int>::iterator p=l1.begin();
	while(p!=l1.end())
	{
		cout<<*p++<<endl;
	}
	
}



	
