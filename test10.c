#include<stdio.h>
#include<file.h>
int main()
{
	FILE *f1,*f2;
	char c;
	printf(“data input\n\n”)
		f1 = fopen(“INPUT”, “w”);
	while((c = getchar())!=EOF)
		putc(c,f1);
	fclose(f1);
	printf(“\ndata output\n\n”)
		f1 = fopen(“INPUT”, “r”);
	while((c = getchar())!=EOF)
		putc(“%c”,c);
	fclose(f1);
	f1=fopen(file1,”r”)
		if(f1=NULL)
		{
			printf(“no data”);
			exit(0):
		}
	f2=fopen(file2,”w”);
	if(f2=null)
	{
		printf(“cannot able to open”);
		exit(0);
	}
	while((ch==getc(f1)!=EOF)
		  putc(ch,f2);
		  printf(“completed”);
		  fclose(f1);
		  fclose(f2);
		  return 0;
		  }