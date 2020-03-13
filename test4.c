#include<stdio.h>
void input();
int compute(int);
void output(int);
int main()
{
	int in,out,com;
	in=input();
	com=compute(int in);
	out=output(int com);
	return 0;
}
void input()
{
	int n;
	printf("\n enter number:\n");
	scanf("%d",&n);
}
int compute(int n)
{
	int rem,sum=0;
	while(n!=0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	return sum;
}
void output(int sum)
{	
	printf("\n sum of digits=%d",sum);
}
