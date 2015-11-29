#include<iostream>
using namespace std;

struct Person
{
	char name[10], address[30];
	int age;
};

struct book
{
		char bid[5];
		char name[30];
		int price;
};
void display(Person p)
{
	cout <<"\nPersons Details :\n"<<endl;
	cout <<"\nName : "<<p.name<<endl;
	cout <<"\nAddress : "<<p.address<<endl;
	cout <<"\nAge : "<<p.age<<endl;
}
void display(book b)
{
	cout <<"\nBook Details :\n"<<endl;
	cout<<"\nBook ID : "<<b.bid<<endl;
	cout<<"Book Name : " <<b.name<<endl;
	cout<<"Price : "<<b.price<<endl;
}
int main()
{
			book b;	
			Person p;
			cout<<"\nPlease Enter Book Details";
			cout<<"\nPlease, Enter Book ID : "<<endl;
			cin>>b.bid;
			cout<<"Please, Enter Book Name : " <<endl;
			cin>>b.name;
			cout<<"Please, Enter Price : "<<endl;
			cin>>b.price;

			cout<<"\nPlease Enter Persons Details";
			cout<<"\nPlease Enter Name : "<< endl;
			cin>>p.name;
			cout<<"\nPlease Enter Address : "<< endl;
			cin>>p.address;
			cout <<"\nPlease Enter age : "<<endl;
			cin>>p.age;

			display(p);
			display(b);
			return 0;
}