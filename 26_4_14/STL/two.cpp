#include<iostream>
#include<fstream>
#include<vector>
using namespace std;
void main()
{
	vector<char> charvect;
	vector<char>::iterator myiter;
	for(int i=0;i<10;i++)
	{
		charvect.push_back(65+i);
	}
	for(myiter=charvect.begin();myiter!=charvect.end();myiter++)
	{
		cout<<endl<<*myiter<<endl;
	}
    fstream f("d:\\charvect.txt",ios::in |ios::app);
	f.write((char*)&charvect,sizeof(charvect));
	cout<<"now reading from file"<<endl;
	vector<char>temp;
	cout<<sizeof(charvect)<<endl;
	cout<<sizeof(temp)<<endl;
	f.seekg(0,ios::beg);
	f.read((char*)&temp,sizeof(temp));

	f.close();
	for(myiter=temp.begin();myiter!=temp.end();myiter++)
	{
		cout<<endl<<*myiter<<endl;
	}
	cout<<"done"<<endl;
}





