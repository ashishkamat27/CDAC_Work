#include<iostream>
#include<algorithm>
#include<time.h>
#include<vector>
using namespace std;
void main()
{
	vector<bool> v;
	int i=0;
	srand(time(NULL));
	for(i=0;i<10;i++)
	{
		if(rand()%2)
		{
			v.push_back(true);
		}
		else
		{
			v.push_back(false);
		}
	}
	for(i=0;i<v.size();i++)
	{
		cout<<endl<<v[i]<<endl;
	}
	i=count(v.begin(),v.end(),true);
	cout<<endl<<"there are \t"<<i<<"\t true\n";
}