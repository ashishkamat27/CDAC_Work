#include<stdio.h>
#include<ctype.h>

void print(int num,int base)
{
    int answer=0;
    if(num/base==0)
    {
	answer=num%base;

	if(answer>9)
	{
	if(answer==10)
	    printf("A");
       	if(answer==11)
	    printf("B");
	if(answer==12)
	    printf("C");
	if(answer==13)
	    printf("D");
	if(answer==14)
	    printf("E");
	if(answer==15)
	    printf("F");
	if(answer==16)
	    printf("E");
	}

	else
	    printf("%d",num%base);
    }
    else
    {
	answer=num%base;
        num=num/base;
        print(num,base);
	if(answer>9)
	{
       	if(answer==10)
	    printf("A");
       	if(answer==11)
	    printf("B");
	if(answer==12)
	    printf("C");
	if(answer==13)
	    printf("D");
	if(answer==14)
	    printf("E");
	if(answer==15)
	    printf("F");
	if(answer==16)
	    printf("E");
	}	

    //	num=num/base;
//	print(num,base);
	else
	printf("%d",answer);
	
    }

	


    return;
}

int main()
{
    int t,b,c,sum=1,i;
    char n[100];

    scanf("%d",&t);

    while(t!=0)
    {
	scanf("%d%d%s",&b,&c,n);
	if(n[0]>'9')
	    sum=n[0]-'A'+10;
	else
    	sum=n[0]-'0';	
//	printf("%d\n",sum);
	for(i=0;n[i]!='\0';i++)
	{
	    if(!(isdigit(n[i])))
	    {
		n[i]=n[i]-'A'+10;
	    }
	}

	    for(i=0;n[i]!='\0';i++)
	    {
//		printf("base: %d\n",b);
//		printf("n[i+1]: %d\n",(int) n[i+1]-(int)'0');

		if(n[i+1]=='\0')
		    break;

		
		if(n[i+1]!='\0')
		{
		    if(!isdigit(n[i+1]))
		    {
			sum=sum*b+n[i+1];
//	printf("%c\n",n[i+1]);
		    }
		    else
		    {
		    	sum=(sum*b)+(n[i+1]-'0');
//			printf("%d\n",(int)(n[i+1]-'0'));

		    }
//		    printf("%d\n",sum);
//		    printf("sum : %d\n",sum);
		}

//		 printf("sum : %d\n",sum);		 
		
	    }

//	     printf("sum : %d\n",sum);

	    print(sum,c);

	printf("\n");

	t--;
    }    return 0;
}	
