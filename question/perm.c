#include<stdio.h>
int list[1000];
int n;
void permutation(int array_1[],int array_2[],int position)
{
    int i;
    if(position==n)
    {
	for(i=0;i<n;i++)
	    printf("%d ",array_1[i]);	
	printf("\n");		
	return;
    }
    else
    {
	for(i=0;i<n;i++)
	{
	    if(array_2[i]==0)
	    {
		array_1[position]=list[i];
		array_2[i]=1;
		permutation(array_1,array_2,position+1);
		array_2[i]=0;
	    }
	}
    }
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t!=0)
    {
	
	int i;
	int array_1[100];
	int array_2[100];

	scanf("%d",&n);
	 
	for(i=0;i<n;i++)
	    array_2[i]=0;

	for(i=0;i<n;i++)
	    scanf("%d",&list[i]);
	permutation(array_1,array_2,0);
	
	t--;
    }
    return 0;
}	






