/*
    Program to print n fibonacci sequence 
    */

#include <iostream>

using namespace std;

void printFibonacci(int n){
    int a=1,b=1;
    cout<<"\n\n\n\t\tThe n sequence of fibonacci are \n\n\t\t\t\t:\t"<<a<<"\t"<<b;
    for(int i=0;i<n;i++){
        int temp=a+b;
        a=b;
        b=temp;
        cout<<"\t"<<b;
    }
}
int main(){
    int n;
    cout<<"\n\n\t\t\tENTER THE VALUE OF n : ";
    cin>>n;
    printFibonacci(n);
}