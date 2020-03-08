#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\n enter three numbers");
	scanf("%d%d%d",&a,&b,&c);
	if((a<=b)&&(a<=c))
	{
		printf("\n %d is the smallest",a);
	}
	if((b<=a)&&(b<=c))
	{
		printf("\n %d is the smallest",b);
	}
	else
	{
		printf("\n %d is the smallest",c);
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\n enter three numbers");
	scanf("%d%d%d",&a,&b,&c);
	if((a<=b)&&(a<=c))
	{
		printf("\n %d is smallest",a);
	}
	else if(b<=c)
	{
		printf("\n %d is the smallest",b);
	}
	else
	{
		printf("\n %d is the smallest",c);
	}
	return 0;
}


#include<stdio.h>
int main()
{
	int a,b,c,n;
	printf("\n enter three numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	n=(a<b)?((a<c)?a:c):((b<c)?b:c);
	printf("\n smallest number=%d",n);
	return 0;
}