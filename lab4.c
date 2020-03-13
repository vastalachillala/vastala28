#include<stdio.h>
int main()
{
	int i,n,a;
	printf("\n enter n:");
	scanf("%d",&n);
	for(i=0;i<=100;i++)
	{
		a=i*n;
		printf("\n %d \n",a);
	}
	return 0;
}