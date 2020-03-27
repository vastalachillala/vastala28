#include<stdio.h>
int main()
{
	int n,i;
	printf("\n enter number of elements\n");
	scanf("%d",&n);
	int ar[n];
	printf("\n enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	printf("\n entered elements are\n");
	for(i=0;i<n;i++)
	{
		printf("%d \n",ar[i]);
	}
	return 0;
}
