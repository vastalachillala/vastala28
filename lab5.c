#include<stdio.h>
int main()
{
	int n,i,sum=0;
	float avg;
	printf("\n enter n");
	scanf("%d",&n);
	int ar[n];
	printf("\n enter elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
		sum=sum+ar[i];
	}
	avg=sum/n;
	printf("\n avegrage =%f",avg);
	return 0;
}
