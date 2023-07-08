// Q-49:- Make a program that inputs user's name & prints its length.

#include<stdio.h>

void printString(char arr[]);
int countLenth(char arr[]);

int main(){
   char name[100];
   fgets(name, 100, stdin);
   printf("Lenth is %d\n", countLenth(name));
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