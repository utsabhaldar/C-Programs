// Q-41:- Write a program to enter price of 4 items & print their final cost with gst.

#include<stdio.h>

float main(){
float price[4];
printf("Enter the 4 prices : ");
scanf("%f", &price[0]);    
scanf("%f", &price[1]);    
scanf("%f", &price[2]);  
scanf("%f", &price[3]);

printf("Total price 1 : %f\n", price[0]+(price[0]*0.18));
printf("Total price 1 : %f\n", price[1]+(price[1]*0.18));
printf("Total price 1 : %f\n", price[2]+(price[2]*0.18));
printf("Total price 1 : %f\n", price[3]+(price[3]*0.18));
return 0;
}