/*
    Program to find the sum of n natural number.
*/

#include <iostream>
#define SUMN(X) (X*(X+1)/2)

using namespace std;

int main(){
    int n;
    cout<<"\n\n\n\t\t\tEnter the value of n : ";
    cin>>n;
    cout<<"\n\n\n\t\t\tThe value of sum of n natural number is : "<<SUMN(n);
    return 0;
}