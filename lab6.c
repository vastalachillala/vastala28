#include<stdio.h>
int main()
{
	int a[10][10],m,n,i,j;
	printf("\n enter rows and columns:");
	scanf("%d%d",&m,&n);
	printf("\n enter matrix elements:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n entered matrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n transpose of the matrix:\n");
	for(j=0;j<n;j++)
	{
		for(i=0;i<m;i++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
