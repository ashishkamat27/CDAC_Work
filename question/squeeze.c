#include<stdio.h>

void print(char a,char word[])
{
    int j=0;


    //    printf("%c\n",a);
    //    printf("%s\n",word);

    if(a!='\0')
    {

	while(word[j]!='\0')
	{
	    
	    if(a==word[j])
		return;
	    else
		j++;
	}

	printf("%c",a);
	return;
    }

    return;
}

int main()
{
    int t,i=1;
    char word[100],string[500];

    scanf("%d",&t);

    while(t!=0)
    {
	i=1;

	scanf("%s",word);

	gets(string);


	while(string[i]!='\0')
	{

	    print(string[i],word);
	    i++;
	}

	printf("\n");

	t--;

    }



    return 0;
}
