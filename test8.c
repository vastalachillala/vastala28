#include<stdio.h>
int main()
{
    struct employee
    {
        char name[100];
        char doj[100];
        float sal;
        int ID;

    };
    struct employee emp;
    printf("Enter name of the employee \n");
    scanf("%s",emp.name);
    printf("Enter salary of the employee \n");
    scanf("%f",&emp.sal);
    printf("Enter the employee ID \n");
    scanf("%d",&emp.ID);
    printf("Enter the date of joining of the employee(dd/mm/yyyy) \n");
    scanf("%s",emp.doj);
    printf("*****EMPLOYEE DETAILS***** \n");
    printf("Emp name: %s \n",emp.name);
    printf("Emp Salary: %f \n",emp.sal);
    printf("Emp ID: %d \n",emp.ID);
    printf("Date of joining: %s \n",emp.doj);
    return 0;
}
