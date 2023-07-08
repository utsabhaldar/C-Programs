//Q-28:- Write a function that prints "Namaste" if user is Indian & "Bonjour" if the user is French.

#include<stdio.h>

//declaration / prototype
void PrintNamaste();
void PrintBonjour();

//conditions and function call
int main(){
    printf("enter f for french and i for indian : ");
    char ch;
    scanf("%c", &ch);

    if(ch=='i') {
PrintNamaste();
    } 
    else{
PrintBonjour();
    }
    return 0;
}

//function definition
void PrintNamaste(){
    printf("Namaste \n");
}

void PrintBonjour(){
    printf("Bonjour \n");
}
