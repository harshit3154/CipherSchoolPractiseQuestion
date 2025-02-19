/*
    program to calculate the factorial of number.
*/

#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;
long long factorial1(int n){
    if(n==0) return 1;
    long long fact=1;
    int i=1,j=n;
    while(i<=j){
        if(i!=j){
            fact=fact*i*j;
        }else{
            fact*=i;
        }
        i++;
        j--;
    }
    return fact;
}

long long factorial2(int n){
    if(n==0) return 1;
    long long fact=1;
    for(int i=2;i<=n;i++){
        fact*=i;
    }
    return fact;
}


// using recurrsion.
long long factorial3(int n){
    if(n<=0) return 1;
    return (long long)n*factorial3(n-1);
}

// using memorization
unordered_map<int,long long> dp;
long long factorial4(int n){
    if(n<1) return 1;
    if(dp.find(n)!=dp.end()){
        return dp[n];
    }
    dp[n]=n*factorial4(n-1);
    return dp[n];
}

long long factorial5(int n){
    if(n<1) return 1;
    int fact=1;
    for(int i=1;i<=n/2;i++){
        fact=fact*i*(n-i+1);
    }
    if(n%2==1)
        fact*=(n/2+1);
    return fact;
}
int main(){
    int n;
    cout<<"\n\n\t\t\tEnter the value of n : ";
    cin>>n;
    if(n<0){
        cout<<"\n\n\t\tFactorial is not defined for negative number.";
    }
    cout<<"\n\n\n\t\t\t\tThe factorial of "<<n<<" is : "<<factorial5(n);
}