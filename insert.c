#include<stdio.h>
#include<conio.h>

void main(){
    int num[11], i, position, item;
    for( i=0; i<10; i++)
{
    printf("Enter the value :");
    scanf("%d",& num[i]);
}
printf("Enter the position where new element is to be inserted");
scanf("%d", &position);
printf(" Enter the new element");
scanf("%d", & item);
for(i=9; i>=position-1; i--)
{
    num[i+1]=num[i];
}
num[position-1]=item;
for(i=0;1<11;i++)
{
    printf("\n element of array : %d", num[i]);
}
    }