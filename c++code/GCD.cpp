/*
    find the GCD(Greatest Common Divisor)
    of two number.
    */

#include <iostream>

using namespace std;
int gcd(int a,int b){
    if(a>b) return gcd(b,a);
    int rem=b%a;
    while(rem){
        b=rem;
        a=
    }
    return divisor;
}

int main(){
    int a,b;
    char ch;
    do{
        cout<<"\n\n\t\tEnter the value of a and b : ";
        cin>>a>>b;
        cout<<"\n\n\t\tThe value of gcd of a and b is : "<<gcd(a,b);
        cout<<"\n\n\t\tDo you want to continue(y/n) : ";
        cin>>ch;
    }while(ch=='y' || ch=='Y');
    return 0;
}