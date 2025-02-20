/*
    Program to print next five prime number greater than n.
*/

#include <iostream>
#include <math.h>

using namespace std;
bool isPrime(int n){
    if(n<2) return false;
    for(int i=2;i<=floor(sqrt(n));i++){
        if(n%i==0) return false;
    }
    return true;
}

void printNextGreaterFivePrime(int n){
    int count=0;
    while(count!=5){
        if(isPrime(++n)){
            cout<<"\t"<<n;
            count++;
        }
    }
}

int main(){
    int n;
    cout<<"\n\n\n\t\tEnter the value of n : ";
    cin>>n;
    cout<<"\n\n\n\t\tThe value of next five number greater than "<<n<<" is\n\n\t\t:";
    printNextGreaterFivePrime(n);
    return 0;
}