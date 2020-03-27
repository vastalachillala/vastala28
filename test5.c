#include<stdio.h>
int main()
{
	int n,i,small,large;
	printf("\n enter number of elements");
	scanf("%d",&n);
	int ar[n];
	printf("\n enter elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	small=large=ar[0];
	for(i=0;i<n;i++)
	{
		if(ar[i]<small)
		small=ar[i];
		if(ar[i]>large)
		large=ar[i];
	}
	printf("\n before interchange %d, %d",small,large);
	printf("\n after interchange %d, %d",large,small);
	return 0;
}
