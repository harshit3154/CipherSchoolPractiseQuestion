#include <stdio.h>

void display(int arr[],int n){
    printf("\n\n\t\tThe element of the array are : ");
    for(int i=0;i<n;i++){
        printf("  %d",arr[i]);
    }
}

void sortZerosAndOnes(int *arr,int n){
    int l=0,h=n-1;
    while(l<h){
        if(arr[l]==0){
            l++;
        }else{
            arr[l]=arr[l]+arr[h];
            arr[h]=arr[l]-arr[h];
            arr[l]=arr[l]-arr[h];
            h--;
        }
    }
}
int main(){
    int arr[]={1,0,1,0,0,0,1,0};
    display(arr,sizeof(arr)/sizeof(arr[0]));
    sortZerosAndOnes(arr,sizeof(arr)/sizeof(arr[0]));
    display(arr,sizeof(arr)/sizeof(arr[0]));
    return 0;
}