/*
    Program to find the factorial of a number.
*/

#include <stdio.h>

int fact(int n){
    if(n<1){
        return 1;
    }
    return n*fact(n-1);
}

int fact1(int n){
    int factorail=1;
    for(int i=1;i<n;i++){
        factorail*=i;
    }
    return factorail;
}
int main(){
    int n;
    printf("\n\n\t\tEnter the value of n : ");
    scanf("%d",&n);
    printf("\n\n\t\t\tThe factorial of %d is : %d",n,fact(n));
}