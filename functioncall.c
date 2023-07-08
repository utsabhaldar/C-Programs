//Q-27:- Write 2 functions - one to print "Hello" & second to print "good bye".
// declaration / prototype

#include<stdio.h>

// declaration / prototype
void PrintHello();
void Printyourwork();
void PrintGoodbye();

int main() {
PrintHello();//function call
Printyourwork();
PrintGoodbye();
return 0;
}
//function definition
void PrintHello() {
    printf("Hello \n");
}
void Printyourwork(){
    printf("your work must be done in this period with limited time \n");
}
void PrintGoodbye() {
    printf("good bye \n");
}