//Random Access File
#include<fstream>
#include<iostream>
using namespace std;
void main()
{
	fstream ff("d:\\fourth.txt",ios::in | ios::app);
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
	ff.seekp(11,ios::beg); //moving put pointer
 tellpos=ff.tellp();
	cout<<endl<<"the put pointer is positioned at\t"<<tellpos<<endl;
	 getpos=ff.tellg();
	cout<<endl<<"the get pointer is positioned at\t"<<getpos<<endl;
	ff.put('4');
	ff.seekg(0,ios::beg); // moving get pointer
	while(ff.get(ch))
	{
		cout<<endl<<ch<<endl;
	}

	ff.close();
}
