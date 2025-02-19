/*
    program to find the sum of n odd number.
*/
#include <stdio.h>
#define SUMO(X) X*X

int main(){
    int n;
    printf("\n\n\n\t\t\tEnter the value of %d : ",n);
    scanf("%d",&n);
    printf("\n\n\t\tThe sum of n odd natural number is : %d",SUMO(n));
    return 0;
}