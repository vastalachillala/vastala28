#include<stdio.h>
int input();
int compute(int);
int main()
{
	int in;
	in=input();
	compute(in);
	return 0;
}
int input()
{
	int n;
	printf("\n enter n:");
	scanf("%d",&n);
	return n;
}
int compute(int n)
{
	int a,i;
	for(i=0;i<=100;i++)
	{
		a=i*n;
		printf("\n %d \n",a);
	}
	return a;
}
