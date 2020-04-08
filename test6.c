#include<stdio.h>
int i,j;
void input(int marks[5][3])
{
	for(i=0;i<5;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter marks of student %d in each subject:",i+1);
			scanf("%d",&marks[i][j]);
		}
		printf("\n");
	}
}
int compute(int marks[5][3])
{
	int large=marks[0][j];
	for(i=0;i<5;i++)
	{
		if(marks[i][j]>large)
		{
			large=marks[i][j];
		}
	}
	return large;
}
void output(int j, int large)
{
	printf("The highest score in subject %d is %d\n",j+1,large);
}
int main()
{
	int marks[5][3];
	input(marks);
	int large;
	for(j=0;j<3;j++)
	{
		large=compute(marks);
		output(j,large);
	}
	return 0;
}
