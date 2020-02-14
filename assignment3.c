#include<stdio.h>
int main()
{
	char a='p';
	int b=25;
	float c=12.567;
	double d=23673787.8794;
	printf("\n value stored in character variable= %c",a);
	printf("\n value stored in integer variable= %d",b);
	printf("\n value stored in float variable= %f",c);
	printf("\n value stored in double variable= %lf",d);
	printf("\n size of character variable a= %d",sizeof(a));
	printf("\n size of integer variable b= %d",sizeof(b));
	printf("\n size of float variable c= %d",sizeof(c));
	printf("\n size of double variable d= %d",sizeof(d));
	return (0);
}