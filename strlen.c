// STANDARD LIBRARY FUNCTION - <string.h>
// strlen(str) - count number of characters excludinng '\0'

#include<stdio.h>
#include<string.h>

void printString(char arr[]);
int countLenth(char arr[]);

int main(){
   char name[]="Utsab Haldar";
   int length= strlen(name);
   printf("Lenth is %d\n", length);
   return 0;
}

void printString(char arr[]){
for(int i=0; arr[i]!= '\0'; i++){
    printf("%c", arr[i]);
}
}

int countLenth(char arr[]){
    int count =0;
    for(int i=0; arr[i] !='\0' ; i++){
        count++;
    }
    return count-1;
}