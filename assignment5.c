#include<stdio.h>
int input();
void compute();
void output();
int main()
{
	int a;
	a=input();
	output(a);
	compute(a);
	return 0;
}
int input()
{
	int n;
	printf("\nenter n:\n");
	scanf("%d",&n);
	return n;
}
void output(int n)
{
	printf("\nfirst %d natural numbers:\n",n);
}
void compute(int n)
{
	int i=1;
	while(i<=n)
	{
		printf("%d \n",i);
		i++;
	}
}
