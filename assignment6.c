#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("\n enter number of elements");
	scanf("%d",&n);
	int ar[n];
	printf("\n enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
		sum=sum+ar[i];
	}
	printf("\n sum=%d",sum);
	return 0;
}
