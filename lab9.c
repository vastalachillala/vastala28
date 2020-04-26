#include<stdio.h>
int main()
{
	int a,b,*p,*q;
	p=&a;
	q=&b;
	printf("\n Enter two numbers: ");
	scanf("%d%d",&a,&b);
	printf("\n Value pointed by p= %d",*p);
	printf("\n Value pointed by q= %d",*q);
	printf("\n Address of a= %d",q);
	printf("\n Address of b= %d",p);
	printf("\n Addition= %d",(*p)+(*q));
	printf("\n Difference= %d",(*p)-(*q));
	printf("\n Product= %d",(*p)*(*q));
	printf("\n Quotient= %d",(*p)/(*q));
	printf("\n Remainder= %d",(*p)%(*q));
	return 0;
}
