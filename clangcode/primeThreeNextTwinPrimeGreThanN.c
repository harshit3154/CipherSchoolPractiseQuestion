/*
    Program to find next three twin prime number greater than n.
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

void printNextGreaterThreeTwinPrime(int n){
    int count=0;
    printf("\n\n\n\t\tThe next three twin prime number greater than %d is\n\n\t\t\t:",n);
    int a=n/6;
    while(count!=3){
        int number=6*++n;
        if(isPrime(number-1)==1 && isPrime(number+1)){
            printf("\t{%d,%d}",number-1,number+1);
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