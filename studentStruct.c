#include<stdio.h>
#include<conio.h>

struct student{
char name[12] ;
int age ;
char fathername[20];
}

int main()

{

struct student record;

printf("Enter the Name: \n");

scanf("%s", &record.name);

printf("Enter the Age: \n");

scanf("%d", &record.age);

printf("Enter the Father Name: \n");

scanf("%s", &record.fathername);

printf("The name is %s.\n",record.name);

printf("The Father name is %s.\n", record.fathername);

printf("The Age is %d.", record.age);

return 0;

}