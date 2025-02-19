/*
    Program to find sum of n even natural number.*/

#include <stdio.h>
#define SUME(X) X*(X+1)

int main(){
    int n;
    printf("\n\n\n\t\t\tEnter the value of n : ");
    scanf("%d",&n);
    printf("\n\n\t\tThe sum of n odd natural number is : %d",SUME(n));
    return 0;
}