// https://leetcode.com/problems/power-of-three/
#include <iostream>

using namespace std;
bool isPowerOfThree(int n){
    if(n<1) return false;
    while(n%3==0){
        n/=3;
    }
    return n==1;
}

int main(){
    cout<<isPowerOfThree(27);
    cout<<isPowerOfThree(45);
    return 0;
}