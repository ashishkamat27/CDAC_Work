#include<stdio.h>
int main() {

    int t,n,i,j,flag;

    scanf("%d",&t);

    while(t!=0)
    {
	scanf("%d",&n);

	int board[500][500];
	for(i=0;i<500;i++)
	{
	    for(j=0;j<500;j++)
		board[i][j]=0;
	}
	i=0;
	j=0;

	for(i=0;i<n;i++)
	{    for(j=0;j<n;j++)
	    scanf("%d",&board[i][j]);
	}


	flag=0;

	/*	 for(i=0;i<n;i++)
		 {    for(j=0;j<n;j++)
		 printf("%d",board[i][j]);
		 }

	 */




	//	while((i>=0 && i<n) && (j>=2 && j<n))
	for(i=0;i<n;i++)
	    for(j=0;j<n;j++)
	    {
		if(flag==0 && board[i][j]==2)
		{
		    if(i<=n-2&&j<=n-1&&board[i+2][j+1]==2)
		    {
			printf("RISKY");
			flag=1;
		    }
		    if(i<=n-2&&j>=1&&board[i+2][j-1]==2&&flag==0)
		    {
			printf("RISKY");
			flag=1;
		    }
		    if(i>=2&&j<=n-1&&board[i-2][j+1]==2&&flag==0)
		    {
			printf("RISKY");
			flag=1;
		    }
		    if(i>=2&&j>=1&&board[i-2][j-1]==2&&flag==0)
		    {
			printf("RISKY");
			flag=1;
		    }
		    if(i<=n-1&&j<=n-2&&board[i+1][j+2]==2&&flag==0)
		    {
			printf("RISKY");
			flag=1;
		    }
		    if(i>=1&&j<=n-2&&board[i-1][j+2]==2&&flag==0)
		    {
			printf("RISKY");
			flag=1;
		    }
		    if(i>=1&&j>=2&&board[i-1][j-2]==2&&flag==0)
		    {
			printf("RISKY");
			flag=1;
		    }
		    if(j>=2&&i<=n-1&&board[i+1][j-2]==2&&flag==0)
		    {
			printf("RISKY");
			flag=1;

		    }
		}
	    }
	if(flag==0) 
	    printf("SAFE");



	t--;
	printf("\n");
    }
    return 0;
}



