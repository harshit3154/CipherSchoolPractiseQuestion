/*
    Program to find the sum of n even natural number.
    
    */

#include <iostream>
#define SUM(x) x*(1+x)

using namespace std;
int main(){
    int n;
    cout<<"\n\n\n\t\t\tEnter the value of n : ";
    cin>>n;
    cout<<"\n\n\n\t\tThe sum of n natural even number is : "<<SUM(n);
}