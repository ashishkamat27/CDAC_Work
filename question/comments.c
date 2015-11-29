#include<stdio.h>
int main()
{
    char program[10000];
    int mode=0,i=0,ch=0,flag=0;

    while((program[i]=getchar())!=EOF)
    {
	i++;
	ch++;
    }

    for(i=0;i<ch;i++)
    {
	if(program[i]=='"' && mode==0 && flag==0)
	{
	   flag=1;
	   mode=0;
	}

	
	else if(program[i]!='"' && flag==1 && mode==0)
	{
	    mode=0;
	    flag=1;
	}

	else if(program[i]=='"' && flag==1 && mode==0)
	{
	    flag=0;
	    mode=0;
	}

	if(mode>=0 && program[i]=='/')
	{
	    if(program[i+1]=='*')
	        if(flag==1)
		    mode=0;
	    	else
		    mode++;
	    
	    else
		mode=0;
	
	}

/*	else if(mode==1 && program[i]=='/')
	{
	    if(program[i+1]=='*')
	    {
		mode=1;
		flag=1;
	    }
	    else
	    {
		mode=1;
		flag=0;
	    }
	    
	}

	 if(mode==1 && flag==1 && program[i]=='*')
	{
	    if(program[i]=='/')
	    {
		mode=1;
		flag=0;
	    }
	    else
	    {
		mode=1;
		flag=1;
	    }
	}
*/

	 if(mode>0 && program[i]=='*')
	{
	    if(program[i+1]=='/')
	    {
		mode--;
		
		if(i<=ch-2)
		i=i+2;
		else if(i>ch-2)
		    i++;
	    }
	   /* else
		mode=1;*/
	}
	if(mode==0)
	    printf("%c",program[i]);
	 
    }

    return 0;
}
