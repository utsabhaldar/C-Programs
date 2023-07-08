//Q-33:- Write a function to calculate Percentage of a student from marks in Science, Math & Sanskrit.
// function and recurtion

#include<stdio.h>
#include<math.h>

// float PercentOfSub(int n);

float main(){
    float a,b,c;
printf("Marks in science :");
scanf("%f \n", &a);
printf("Marks in math :");
scanf("%f \n", &b);
printf("Marks in sanskrit :");
scanf("%f \n", &c);
scanf("%f \n", ((a+b+c)/3));
return 0;
}

// float PercentOfSub(int n){

// }