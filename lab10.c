#include <math.h>
#include <stdio.h>
struct roots
{
	float r1;
	float r2;
	float realpart;
	float imgpart;
};
void input(int *a,int *b,int *c)
{
	printf("\n enter coefficients a, b and c in the form (a*x^2 + b*x + c): ");
	scanf("%d%d%d",&*a,&*b,&*c);
}
void find_roots(int a,int b,int c,struct roots *r)
{
	r->r1=(-b+sqrt((b*b)-4*a*c))/(2*a);
	r->r2=(-b-sqrt((b*b)-4*a*c))/(2*a);
	r->realpart=(-b/(2*a));
	r->imgpart=sqrt(-(b*b)-4*a*c)/(2*a);
}
void output(int a,int b,int c,struct roots r)
{

	if((b*b)<(4*a*c))
	{
		printf("\n the roots are imaginary");
		printf("\n roots of (%d*x^2) + (%d*x) + (%d) are root1=%0.2f+%0.2f i, root2=%0.2f-%0.2f i",a,b,c,r.realpart,r.imgpart,r.realpart,r.imgpart);
	}
	else if((b*b)>(4*a*c))
	{
		printf("\n the roots are real and different");
		printf("\n roots of (%d*x^2) + (%d*x) + (%d) are root1= %0.2f, root2=%0.2f",a,b,c,r.r1,r.r2);
	}
	else
	{
		printf("\n the roots are real and equal");
		printf("\n roots of (%d*x^2) + (%d*x) + (%d) are %0.2f",a,b,c,r.realpart);
	}
	printf("\n");
}	
int main() 
{
	int a,b,c;
	struct roots r;
	input(&a,&b,&c);
	find_roots(a,b,c,&r);
	output(a,b,c,r);
	return 0;
} 
