#include<strstream>
#include<iostream>
using namespace std;
void main()
{
	strstream ff;
	int i=65;
	char ch;
	for(i=65;i<100;i++)
	{
		ff.put((char)i);
	}
	int tellpos=ff.tellp();
	cout<<endl<<"the put pointer is positioned at\t"<<tellpos<<endl;
	int getpos=ff.tellg();
	cout<<endl<<"the get pointer is positioned at\t"<<getpos<<endl;
	while(ff.read(&ch,1))
	{
		cout<<ch<<endl;
	}
	ff.clear();
	ff.seekp(12,ios::beg);
	cout<<endl<<"Put pointer\t"<<ff.tellp()<<endl;
	ff.put('@');
	ff.seekg(0,ios::beg);
	cout<<endl<<"After Inserting\n";
	tellpos=ff.tellp();
	cout<<endl<<"the put pointer is positioned at\t"<<tellpos<<endl;
	getpos=ff.tellg();
	cout<<endl<<"the get pointer is positioned at\t"<<getpos<<endl;
	while(ff.read(&ch,1))
	{
		cout<<endl<<ch<<endl;
	}
}
