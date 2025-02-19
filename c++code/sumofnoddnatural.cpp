/*
    Program to find the sum of n natural odd number.
*/

#include <iostream>

using namespace std;
int sumOfOddNaturalNumber(int N){
    int sum=(N+1)/2*(2+(N-1)*2);
    cout<<"\n\n\t\tThe sum of first n natural odd number is : "<<sum;
}

int main(){
    int n;
    cout<<"\n\n\n\t\t\tEnter the value of n : ";
    cin>>n ;
    sumOfOddNaturalNumber(n);
    return 0;
}