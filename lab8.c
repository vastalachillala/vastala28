#include<stdio.h>
struct stud
{
	int s1,s2,rollno,tot;
	char name[10],dept[10],sec[5];
	double fees;
}s[10];
int main()
{
	int i,maxtot,pos;
	for(i = 0; i < 2; i++)
	{
		printf("\n Enter the roll number of student :");
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
	maxtot=s[0].tot;
	pos=0;
	for(i=0;i<2;i++)
	{
		if(s[i].tot>maxtot)
		{
			maxtot=s[i].tot;
			pos=i;
		}
	}
	printf("details of the students with the higher marks are\n");
	printf("roll no: %d\n", s[pos].rollno);
	printf("name: %s\n", s[pos].name);
	printf("section: %s\n",s[pos].sec);
	printf("department: %s\n",s[pos].dept);
	printf("fees: %lf\n",s[pos].fees);
	printf("total marks: %d\n",s[pos].tot);
	return 0;
}