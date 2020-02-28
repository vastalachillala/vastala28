#include<stdio.h>
int total_convert_mins(int,int);
int main()
{
	int hr,min,total_mins;
	printf("enter hours and minutes:\n");
	scanf("%d%d",&hr,&min);
	total_mins=total_convert_mins(hr,min);
	printf("total minutes=%d",total_mins);
	return 0;
}
int total_convert_mins(int h,int m)
{
	int t;
	t=h*60+m;
	return t;
}