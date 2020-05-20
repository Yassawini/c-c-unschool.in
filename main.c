//C program to store the information of 5 employee//
#include<stdio.h>

struct employee
{
    int id;
    char name[10];
    float exp;
    int sal;
};
void main()
{
    int i;
    struct employee emp[5];
    for(i=0;i<5;i++)
    {
        printf("\n\n enter details of %d employee",i+1);
        printf("\n enter the employee name:");
        scanf("%s",&emp[i].name);
        printf("\n enter the id of employee:");
        scanf("%d",&emp[i].id);
        printf("\n enter the experience of employee:");
        scanf("%f",&emp[i].exp);
        printf("\n enter the salary of employee:");
        scanf("%d",&emp[i].sal);
    }
    printf("\n employee details");
    for(i=0;i<5;i++)
    {
        printf("\nEmployee name is:%s",emp[i].name);
        printf("\nEmployee id is:%d",emp[i].id);
        printf("\nEmployee experience is:%f",emp[i].exp);
        printf("\nEmployee salary is:%d",emp[i].sal);
    }
    return 0;
}
