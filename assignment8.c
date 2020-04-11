#include<stdio.h>
int main()
{
	char str[100];
	int len=0,i=0;
	printf("\n enter a string:");
	gets(str);
	while(str[i++]!='\0')
	{
		len++;
	}
	printf("\n string length is : %d\n",len);
	return 0;
}
