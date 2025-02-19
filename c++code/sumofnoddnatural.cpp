/*
    Program to find the sum of n natural odd number.
*/

#include <iostream>

using namespace std;
int sumOfOddNaturalNumber(int n){
    int sum=(n)/2.0*(2+(n-1)*2);
    // int sum=n*(1+(n-1));
    cout<<"\n\n\t\tThe sum of first n natural odd number is : "<<sum;
}

int main(){
    int n;
    cout<<"\n\n\n\t\t\tEnter the value of n : ";
    cin>>n ;
    sumOfOddNaturalNumber(n);
    return 0;
}