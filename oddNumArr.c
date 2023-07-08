// Q-42:- Write a function to count the number of odd numbers in an array.

#include<stdio.h>

int countOddNum(int arr[], int n);

int main(){
int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
printf("%d \n", countOddNum(arr, 15));
return 0;
}

int countOddNum(int arr[], int n){
int count = 0;
int i;
for (i=0; i<n; i++){
    if(arr[i] % 2 != 0){
        count++;
    }
} return count;
}