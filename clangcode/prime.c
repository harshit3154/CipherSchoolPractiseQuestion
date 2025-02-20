#include <stdio.h>
#include <math.h>

int main(){
    int n;
    int flag=1;
    printf("\n\n\t\tEnter the value of n : ");
    scanf("%d",&n);
    for(int i=2;i<=ceil(sqrt(n));i++){
        if(n%i==0)
        {
            printf("\n\n\n\t\t\tIts not a prime number.");
            flag=0;
            break;
        }
    }
    if(flag==1){
        printf("\n\n\n\t\t\tIt's a prime number.");
    }
    return 0;
}