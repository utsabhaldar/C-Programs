// Q-32:- Write a function to convert celsius to fahrenheit.
// function and recurtion
// formula:- [F=(C*5/9)+32]

#include<stdio.h>
#include<math.h>

float CFconvert(float n);

float main() {
    float CFconvertN = CFconvert(-40);
    printf("the value of F is %f", CFconvertN);
    return 0;
}

float CFconvert(float n) {
    if ( n==0 )
    return 32;
    float CFconvertN = n * (9.0/5.0) + 32.0;
    return CFconvertN;
}