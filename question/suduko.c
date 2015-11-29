#include<stdio.h>
#include<math.h>

int main() 
{

    int t,i,m,z,x,flag,b,n,j;

    scanf("%d",&t);

    while(t!=0)

    {

	flag=0;
	scanf("%d",&n);

	long long int sud[n][n],sum1,sum2,a;

	i=0;
	j=0;

	for(i=0;i<n;i++)
	    for(j=0;j<n;j++)
		scanf("%lld",&sud[i][j]);


	//single element

	if(n==1)
	{    
	    printf("YES");
	 
	}
	else
	{


	//all elements same

	a=sud[0][0];
	b=0;


	for(i=0;i<n;i++)
	    for(j=0;j<n;j++)
		if(a==sud[i][j])
		{
		    b++;
		}
	if(b==n*n) 
	{
	    flag=1;
	}




	//sum of column
	sum1=0;
	sum2=0;

	for(i=0;i<n;i++)
	    sum1=sum1+sud[i][0];

	j=1;

	while(j<n)
	{
	    sum2=0;

	for(i=0;i<n;i++)
	{
	   sum2=sum2+sud[i][j];
	}

	   if(sum1!=sum2)
	   {
	       flag=1;
	       break;
	   }
	      
	     	
	   else
	       j=j+1;
	}
     
	//sum of row

	 sum1=0;
	 sum2=0;

	 for(j=0;j<n;j++)
	     sum1=sum1+sud[0][j];

	 i=1;

	 while(i<n)
	 {
	     sum2=0;
	     for(j=0;j<n;j++)
		 sum2=sum2+sud[i][j];

	     if(sum1!=sum2)
	     {
		flag=1;
       		break;
	     }

	     else
	     i++;
	 }

	 //sum of box

	 sum1=0;
	 sum2=0;

	 m=sqrt(n);

	 z=2;
	 j=0;
	 x=0;

	 
	 for(i=0;i<m;i++)
             for(j=0;j<m;j++)
	        sum1=sum1+sud[i][j];


	 while(z<=m)
	 {
	     sum2=0;

	     for(i=m+x;i<z*m;i++)
	        for(j=0;j<m;j++)
		    sum2=sum2+sud[i][j];

	     if(sum1!=sum2)
	     {
		flag=1;
		break;
	     }

	     else
	     {
		x=x+m; 
		 z++;
	     }
	 }
	     x=0;
	     z=2;

	     while(z<=m)
	     {
		 sum2=0;
		 for(j=m+x;j<z*m;j++)
		    for(i=0;i<m;i++)
		       sum2=sum2+sud[i][j];

	      if(sum1!=sum2)
	      {
		   flag=1;
		   break;
	      }

	      else
	      {
		  x=x+m;
		  z++;
	      }
	     }
	     x=0;
	     z=2;
	     while(z<=m)
	     {
		 sum2=0;
		 for(j=m+x;flag==0&&j<z*m;j++)
		    for(i=m+x;i<z*m;i++)
			sum2=sum2+sud[i][j];

		 if(sum1!=sum2)
		 {
		     flag=1;
		     break;
		 }

		 else
		 {
		     x=x+m;
		     z++;
		 }
	     }
	     if(flag==1) printf("NO\n");
	     else printf("YES\n");
	}	 


/*	 //single element

	 if(n==1&&flag==0)
	 {    printf("YES");
	     flag=1;
	 }
	 	

	 //all elements same

	a=sud[0][0];
	b=0;
	

	 for(i=0;flag==0&&i<n;i++)
            for(j=0;j<n;j++)
		if(a==sud[i][j])
		{
		    b++;
		}
	      if(b==n*n) 
		{
		    printf("NO");
		    flag=1;
		    break;
		}
*/
		 t--;
    }
    
    return 0;
}

