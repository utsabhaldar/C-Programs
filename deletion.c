// #include<stdio.h>
//     temp = head;
//     prev = head;
//     for(int i = 0; i < position; i++)
//     {
//   if(i == 0 && position == 1)
//   head = head->next;
//    free(temp)
//    else
//   {
//   if (i == position - 1 && temp)
//    {
//     prev->next = temp->next;
//    free(temp);
//     }
//   else
//  {
//  prev = temp;
//    if(prev == NULL) // position was greater than number of nodes in the list
//   break;
//  temp = temp->next; 
//   }
//    }

#include<stdio.h>
#include<conio.h>

void main(){
    int num[11], i, position, item;
    for( i=10; i>0; i--)
{
    printf("Enter the value :");
    scanf("%d",& num[i]);
}
printf("Enter the position where new element is to be inserted :");
scanf("%d", &position);
printf(" Enter the new element");
scanf("%d", & item);
for(i=0; i<=position+1; i++)
{
    num[i+1]=num[i];
}
num[position-1]=item;
for(i=11;11>1;i--)
{
    printf("\n element of array : %d", num[i]);
}
    }