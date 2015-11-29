#include<conio.h>
#include<iostream>
using namespace std;

struct book
{
		char bid[5];
		char name[30];
		int price;
};

int main()
{
		int bno;
		cout<<"How Many Records Wants to Create? "<<endl;
		cin>>bno;
		struct book *books=new book[bno];
		for(int i=0;i<bno;i++)
		{
				cout<<"\nBook No : "<<i+1;
				cout<<"\nPlease, Enter Book ID : "<<endl;
				cin>>books[i].bid;
				cout<<"Please, Enter Book Name : " <<endl;
				cin>>books[i].name;
				cout<<"Please, Enter Price : "<<endl;
				cin>>books[i].price;
		}

		for(int i=0;i<bno;i++)
		{
				cout<<"\nBook No : "<<i+1;
				cout<<"\nBook ID : "<<books[i].bid<<endl;
				cout<<"Book Name : " <<books[i].name<<endl;
				cout<<"Price : "<<books[i].price<<endl;

		}
		delete books;
		books=NULL;
		getch();
		return 0;
}
