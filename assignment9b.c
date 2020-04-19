#include<stdio.h>
struct author
{
    char fn[10];
    char ln[10];
};
typedef struct author Auth;
struct publish
{
    int year;
    int mnth;
};
typedef struct publish Pd;
struct book
{
    char name[20];
    Auth a;
    Pd p;
};
typedef struct book Book;
int main ()
{
    int i,n;
    printf("Enter The Number Of Books: ");
    scanf("%d",&n);
    Book b[n];
    for(i=0;i<n;i++)
    {
        printf("\nEnter Book %d Details:\n",i+1);
        printf("Enter Book Name: ");
        scanf(" %s",b[i].name);
        printf("Enter Month And Year OF Publication:\n");
        printf("Year: ");
        scanf(" %d",&b[i].p.year);
        printf("Month: ");
        scanf("%d", &b[i].p.mnth);
        printf("Enter Author Details:\n");
        printf("First Name: ");
        scanf(" %s",b[i].a.fn);
        printf("Last Name: ");
        scanf(" %s",b[i].a.ln);
    }
    for(i=0;i<n;i++)
    {
        printf("\nBook %d Details:\n",i+1);
        printf("Book Name: %s\n",b[i].name);
        printf("Author: %s %s\n",b[i].a.fn,b[i].a.ln);
        printf("Published In: %d/%d\n",b[i].p.mnth,b[i].p.year);
    }
    return 0;
}
