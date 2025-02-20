/*
    Program to print the next three twin prime.
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

void printNextGreterThreeTwinPrime(int n){
    int count=0;
    int a=n/6;
    while(count!=3){
        if(isPrime(++a*6-1) && isPrime(a*6+1)){
            cout<<"\t{"<<a*6-1<<","<<a*6+1<<"}";
            count++;
        }
    }
}

int main(){
    int n;
    cout<<"\n\n\n\t\tEnter the value of n : ";
    cin>>n;
    cout<<"\n\n\n\t\tThe value of next three twin prime greater than "<<n<<" is\n\n\t\t\t : ";
    printNextGreterThreeTwinPrime(n);
    return 0;
}