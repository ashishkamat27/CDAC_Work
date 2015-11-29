#include<stdio.h>

int main()
{
    int t,i,j=0,k=0,flag=0,a=0;
    char word[100],string[500];

    scanf("%d",&t);

    while(t!=0)
    {
	k=0;

	scanf("%s",word);
	gets(string);

	//	character counter

	for(j=0;word[j]!='\0';j++)
	    k++;
		
//	printf("char %d\n",k);

	//searching for first letter

	

	for(i=0;string[i]!='\0';i++)
	{
	    j=0;

	    if(word[j]==string[i])	      //first letter match
	    {
		flag=1;

//		printf("matched: string %c  position  %d \n",string[i],i);

		for(j=1;j<k;j++)
		{       
		   if(string[i+1]==word[j] && flag==1)
		    {
			i++;
			flag=1;
//			printf("matching: string %c  word %c  \n",string[i],word[j]);
					
		    }

		     else 
		     {
			 flag=0;
			 break;
		     }

		

		}
		if(flag==1 && string[i-k]==' ')
		{
		    
		    if(string[i+1]==' ' || string[i+1]=='\0')
		    {
//			printf("entered if");

			flag=1;
		    }

		    else 
			flag=0;
		}

		else
		    flag=0;


		
	    }

	    if(flag==1)
		break;
	}

//	printf("i: %d \n",i);


	if(flag==1)
	{
	    printf("FOUND");
	 
	}	

	 if(flag==0)
	    printf("NOT FOUND");


	



	printf("\n");

	t--;

	flag=0;
    


    }


    return 0;
}
