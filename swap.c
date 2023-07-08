// Q-38:- Swap 2 numbers, a & b.

#include<stdio.h>

// void swap(int a, int b);
void _swap(int *a, int *b);

int main(){ 
int x = 7, y = 9;
_swap (&x, &y);
printf("x = %d & y = %d\n", x, y);
return 0;
}

// call by reference
void _swap(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}

