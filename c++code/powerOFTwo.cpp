#include <iostream>

using namespace std;
long  pow(int x,int n){
    if(n==0) return 1;
    if(n==1) return x;
    int halfpower=pow(x,n/2);
    if(n%2==0){
        return halfpower*halfpower;
    }else{
        return x*halfpower*halfpower;
    }
    return 1;
}

int main(){
    for(int i=0;i<26;i++)
        cout<<i<<" ----> "<<pow(2,i)<<endl;
    return 0;
}