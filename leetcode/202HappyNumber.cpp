//  https://leetcode.com/problems/happy-number/submissions/1571818515/
#include <iostream>
#include <vector>
#include <math.h>
#include <unordered_set>

using namespace std;
int sumDigitSquare(int n){
    int sum=0;
    while(n){
        sum+=pow(n%10,2);
        n/=10;
    }
    return sum;
}

int sumDigit(int n){
    int sum=0;
    while(n){
        sum+=n%10;
        n/=10;
    }
    return sum;
}

bool isHappy(int n){
    // do{
    //     n=sumDigitSquare(n);
    //     cout<<n<<endl;
    // }while(n>9);
    // return n==1?true:false;

    unordered_set<int> us;
    us.insert(n);
    while(n!=1){
        n=sumDigitSquare(n);
        if(us.find(n)!=us.end())    return false;
        us.insert(n);
    }
    return true;
}

int main(){
    for(int i=1;i<999;i++){
        cout<<endl<<i<<" ---> "<<isHappy(i);                          
    }
    return 0;
}