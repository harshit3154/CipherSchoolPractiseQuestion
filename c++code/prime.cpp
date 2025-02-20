#include <iostream>
#include <math.h>

using namespace std;
int main(){
    int n;
    bool flag=true;
    cout<<"\n\n\t\tEnter the value of n : ";
    cin>>n;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
        {
            cout<<"\n\n\n\t\t\tIts not a prime number.";
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<"\n\n\n\t\t\tIt's a prime number.";
    }
    return 0;
}