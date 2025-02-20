#include <stdio.h>
#include <math.h>

int main(){
    long long n;
    int i=0,decimal=0;
    printf("\n\n\t\tEnter the value of binary number : ");
    scanf("%d",&n);
    while(n!=0){
        int d=n%10;
        decimal+=d*pow(2,i++);
        n/=10;
    }
    printf("\n\n\t\t\tThe decimal equivalent of the binary %d is : %d",n,decimal);
    return 0;
}
