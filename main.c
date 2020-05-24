#include <stdio.h>
#include <stdlib.h>
struct employee
{
char name[50];
int age;
int pnumber;
float salary;
}a[20];
int main()
{
for(int i=0;i<20;i++)
{
printf("ENTER NAME");
scanf("%s",&a[i].name);
printf("ENTER AGE");
scanf("%d",&a[i].age);
printf("ENTER PHONE NUMBER");
scanf("%d",&a[i].pnumber);
printf("SALARY");
scanf("%f",&a[i].salary);
}
printf("NAME   AGE    PHONE NUMBER     SALARY\n");
for(int i=0;i<20;i++)
{
printf("%s \t",a[i].name);
printf("%d \t",a[i].age);
printf("%d \t",a[i].pnumber);
printf("%d \t",a[i].salary);
printf("\n");
}
return 0;
}
