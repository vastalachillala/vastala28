#include<stdio.h>
int main()
{
	int n,i,a,pos;
	printf("\n enter number of elements\n");
	scanf("%d",&n);
	int ar[n];
	printf("\n enter the elements\n");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&ar[i]);
	}
	a=ar[0];
	printf("\n enter the element to be searched\n");
	scanf("%d",&a);
	for(i=1;i<=n;i++)
	{
		if(a==ar[i])
		pos=i;
	}
	printf("\n position of %d is %d",a,pos);
	return 0;
}
