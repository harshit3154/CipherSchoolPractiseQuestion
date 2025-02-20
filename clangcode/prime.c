#include <stdio.h>
#include <math.h>

void isPrime(int n){
    if(n<2){
        printf("\n\n\n\t\t%d is not a prime number.",n);
        return;
    }
    int flag=1;
    for(int i=2;i<=ceil(sqrt(n));i++){
        if(n%i==0)
        {
            printf("\n\n\n\t\t%d is not a prime number.",n);
            flag=0;
            break;
        }
    }
    if(flag==1){
        printf("\n\n\n\t\t\t%d is a prime number.",n);
    }
}
int main(){
    int n;
    printf("\n\n\t\tEnter the value of number to be checked prime : ");
    scanf("%d",&n);
    isPrime(n);
    return 0;
}