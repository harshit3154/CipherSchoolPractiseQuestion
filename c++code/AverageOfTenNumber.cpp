/*
    Find the avarage of 10 number.
    */
#include <iostream>

using namespace std;

int main(){
    int a;
    int sum=0;
    for(int i=0;i<10;i++){
        cout<<"\n\n\t\t\tEnter the "<<i+1<<" number : ";
        cin>>a;
        sum+=a;
    }
    cout<<"\n\n\t\t\tThe avarage of 10 number is : "<<sum/10.0;
    return 0;
}