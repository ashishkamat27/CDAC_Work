#include<fstream>
#include<string>
#include<iostream>
using namespace std;
class MyClass
{
private:
	char name[40];
	int age;
public:
	MyClass()
	{
	}
	MyClass(char *ptr,int k)
	{
		strcpy(name,ptr);
		age=k;
	}
	friend istream&  operator>>(istream&,MyClass&);
	friend ostream&  operator<<(ostream&,MyClass&);
};
istream&  operator>>(istream &i,MyClass &k)
{
	i.getline(k.name,40);
	i>>k.age;
	return i;
}
ostream& operator<<(ostream &o,MyClass &k)
{
	o<<k.name<<"\t"<<k.age<<endl;
	return o;
}
void main()
{
	MyClass m1("sachin",30);
	cout<<endl<<m1<<endl;
	cin>>m1;
	cout<<endl<<m1<<endl;
	MyClass m2;
	fstream f("d:\\fifth.txt",ios::in | ios::app |ios::binary);
	f.write((char *)&m1,sizeof(m1)); //serialization
	f.seekg(0,ios::beg);
	f.read((char *)&m2,sizeof(m2));
	cout<<endl<<"no.of chrs read\t"<<f.gcount()<<endl;
	f.close();
	cout<<endl<<"after reading\n";
	cout<<m2<<endl;

}