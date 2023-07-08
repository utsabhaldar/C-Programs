// Q-46:- Creat a 2D array, storing the tables of 2 & 3.

#include<stdio.h>

void printtables(int arr[][10],int n, int m, int number);

int main(){
    int table[2][10];
    printtables(table, 0, 10, 2);
    printtables(table, 1, 10, 3);

    for(int i=0; i<=10; i++){
        printf("%d\n", table[0][i]); 
    }

    for(int i=0; i<=10; i++){
        printf("%d\n", table[1][i]); 
    }
return 0;
}

void printtables(int arr[][10],int n, int m, int number){
    for(int i=0; i<m; i++){
        arr[n][i] = number * (i+1);
    }
}

