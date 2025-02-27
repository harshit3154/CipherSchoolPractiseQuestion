#include <iostream>

using namespace std;

// https://leetcode.com/problems/n-th-tribonacci-number/description/
int tribnocciSequence(int n){
    if(n==1) return 0;
    if(n<4) return 1;
    return tribnocciSequence(n-1)+tribnocciSequence(n-2)+tribnocciSequence(n-3);
}

int tribnocciSequence1(int n){
    if(n==1) return 0;
    if(n<4) return 1;
    int a=0,b=1,c=1;
    for(int i=0;i<n-3;i++){
        int temp=a+b+c;
        a=b;
        b=c;
        c=temp;
    }
    return c;
}

int main(){
    cout<<"\n\n\t\tThe tribnocci sequence are : ";
    for(int i=1;i<12;i++){
        cout<<tribnocciSequence1(i)<<"\t";
    }

    cout<<"\n\n\t\tThe tribnocci sequence are : ";
    for(int i=1;i<12;i++){
        cout<<tribnocciSequence(i)<<"\t";
    }
}