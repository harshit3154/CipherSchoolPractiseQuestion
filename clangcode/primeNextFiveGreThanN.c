/*
    Program to find next five prime number greater than n.
*/

#include <stdio.h>
#include <math.h>

int isPrime(int n){
    if(n<2) return 0;
    for(int i=2;i<=floor(sqrt(n));i++){
        if(n%i==0) return 0;
    }
    return 1;
}

void printNextGreaterFivePrime(int n){
    int count=0;
    printf("\n\n\n\t\tThe next five number greater than %d is\n\n\t\t\t:",n);
    while(count!=5){
        if(isPrime(++n)==1){
            printf("\t%d",n);
            count++;
        }
    }
}

int main(){
    int n;
    printf("\n\n\t\tEnter the value of number to be checked prime : ");
    scanf("%d",&n);
    printNextGreaterFivePrime(n);
    return 0;
}