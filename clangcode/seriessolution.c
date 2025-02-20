#include <stdio.h>

int main(){
    int n,a=1,sum=1;
    printf("\n\n\t\tEnter the value of n : ");
    scanf("%d",&n);
    printf("\n\n\t\tThe term of the series are\n\n\t\t\t%d\t",a);
    for(int i=1;i<n;i++){
        a=a+i;
        sum+=a;
        printf("%d\t",a);
    }
    printf("\n\n\n\t\t\tThe sum of the sequence till %d term is :%d ",n,sum);
    return 0;
}