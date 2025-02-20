/*
    we have to find the next term using formula
    f(n)=n-1+f(n-1)
    where f(1)=1
*/

#include <iostream>

using namespace std;
int main(){
    int n;
    cout<<"\n\n\t\tEnter the value of n : ";
    cin>>n;
    int a=1,sum=a;
    cout<<"\n\n\t\tThe value of the term of the series are \n\n\t\t\t: "<<a;
    for(int i=1;i<n;i++){
        a=a+i;
        cout<<"\t"<<a;
        sum+=a;
    }
    cout<<"\n\n\t\tThe sum of the series is : "<<sum;
    return 0;
}