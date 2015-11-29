#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void main()
{
	char str[]="The stl is power programming";
	vector<char> v,v2(30);
	unsigned int i=0;
	for(i=0;str[i];i++)
	{
		v.push_back(str[i]);
	}
	for(i=0;i<v.size();i++)
	{
		cout<<endl<<v[i];
	}
	remove_copy(v.begin(),v.end(),v2.begin(),' ');
	for(i=0;i<v2.size();i++)
	{
		cout<<v2[i];
	}
	cout<<endl<<endl;
	replace_copy(v.begin(),v.end(),v2.begin(),' ',':');
	for(i=0;i<v2.size();i++)
	{
		cout<<v2[i];
	}
}
