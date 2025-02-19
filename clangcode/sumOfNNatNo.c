/*
    Program to find the sum of n natural number.
*/
#include <stdio.h>

int main(){
    int n;
    printf("\n\n\n\t\tEnter the value of n : ");
    scanf("%d",&n);
    printf("\n\n\t\tThe value of sum of %d natural number is : %d",n,n*(n+1)/2);
    return 0;
}