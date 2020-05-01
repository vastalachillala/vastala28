#include <stdio.h>
void input(int *a,int *b)
{
	printf("\n Enter two integers: ");
    scanf("%d%d",&*a,&*b);
}
void compute(int a,int b,int *gcd)
{
	int i;
    for(i=1;i<=a && i<=b;++i)
    {
        if(a%i==0 && b%i==0)
            *gcd = i;
    }
}
void output(int a,int b,int gcd)
{
    printf("G.C.D of %d and %d is %d",a,b,gcd);
    printf("\n");
}
int main()
{
	int a,b,gcd;
	input(&a,&b);
	compute(a,b,&gcd);
	output(a,b,gcd);
    return 0;
}
