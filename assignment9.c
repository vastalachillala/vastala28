#include<stdio.h>
struct stud
{
	int rollno,tot;
	char name[50],dept[50],sec[10];
	double fees;
}s[10];
int main()
{
	int i;
	for(i = 0; i < 10; i++)
	{
		printf("\n enter student details:\n");
		printf("\n Enter the roll number of student %d : ",i+1);
		scanf("%d", &s[i].rollno);
		printf("\n Enter the name : ");
		scanf("%s", s[i].name);
		printf("\n Enter section: ");
		scanf("%s",s[i].sec);
		printf("\n Enter department: ");
		scanf("%s",s[i].dept); 
		printf("\n Enter fees: ");
		scanf("%lf",&s[i].fees);
		printf("\n Enter the total marks obtained: ");
		scanf("%d", &s[i].tot);
	}
	for(i=0;i<10;i++)
	{
		printf("\n student details:\n");
		printf("\n roll no: %d",s[i].rollno);
		printf("\n name: %s",s[i].name);
		printf("\n section: %s",s[i].sec);
		printf("\n department: %s",s[i].dept);
		printf("\n fees: %lf",s[i].fees);
		printf("\n total marks obtained: %d",s[i].tot);
	}
	return 0;
}
