#include<stdio.h>
int main()
{
	int m[2][5],i,j,k;
	float sum=0;
	for(i=0;i<5;i++)
	{
		printf("\n enter the sub %d marks of each sub:",i+1);
		for(j=0;j<2;j++)
		{
			scanf("%d",&m[j][i]);
		}
	}
	for(k=0;k<3;k++)
	{
		for(i=0;i<5;i++)
		{
			for(j=0;j<2;j++)
			{
				sum=sum+m[j][i];
			}

			printf("\n avg marks in sub %d is %f",i+1,sum/2);
			sum=0;
		}
	}
	printf("\n");
	return 0;
}
