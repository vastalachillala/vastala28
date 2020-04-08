#include<stdio.h>
int main()
{
	int a[10],i,n,key,found=0;
	printf("\n Enter the number of elements:");
	scanf("%d",&n);
	printf("\n Enter %d elements:",n );
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Enter the element to be searched:");
	scanf("%d",&key);
	for (i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			found=1;
			break;
		}
	}
	if(found==1)
		printf("\n position of the element is %d",i+1);
	else
		printf("\n element not found");
	return 0;
}
