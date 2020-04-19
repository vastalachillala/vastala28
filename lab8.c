#include<stdio.h>
struct stud
{
	int s1,s2,rollno,tot;
	char name[50],dept[50],sec[10];
	double fees;
}s[10];
int main()
{
	int i;
	for(i = 0; i < 2; i++)
	{
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
	printf("\nRoll No. \t Name \t Sec \t Dept \t Fees \t\t Total \n\n");
	if(s[1].tot>s[2].tot)
	{
		printf("%d \t %s \t %s \t %s \t %lf \t\t %d \n", s[1].rollno,s[1].name,s[1].sec,s[1].dept,s[1].fees,s[1].tot);
	}
	else
	{
		printf("%d \t %s \t %s \t %s \t %lf \t\t %d \n", s[2].rollno,s[2].name,s[2].sec,s[2].dept,s[2].fees,s[2].tot);
	}
	return 0;
}
