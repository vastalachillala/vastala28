#include <stdio.h>
#include<string.h>
int main()
{
	char str[100],revstr[100];
	int i,j,flag=1;
	printf("\n enter a string: ");
	gets(str);
	j=0;
	i=strlen(str);
	i--;
	while(i!=0)
	{
		revstr[j++]=str[i];
		i--;
	}
	revstr[j]='\0';
	i = 0;
	while(str[i]!='\0'&&revstr[i]!='\0')
	{
		if(str[i]!=revstr[i])
		{
			flag=0;
			break;
		}
		i++;
	}
	if(flag==0)
		printf("\n string is not palindrome\n");
	else
		printf("\n entered string is palindrome\n");
	return 0;
}
