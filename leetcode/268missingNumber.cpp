/*
     https://leetcode.com/problems/missing-number/submissions/1553603666/
     268 find the missing element problem
*/

#include <iostream>
#include <vector>


using namespace std;
int missingNumber(vector<int>& nums) {

    /*
    int n=nums.size();
    int sum=0;
    for(auto it:nums){
        sum+=it;
    }
    return n*(n+1)/2-sum;*/

    /*for(int i=0;i<=nums.size();i++){
        bool found=false;
        for(auto it:nums){
            if(it==i){
                found=true;
                break;
            }
        }
        if(!found){
            return i;
        }
    }
    return -1;
    */
    int xor1=0,xor2=0;
    for(int i=0;i<=nums.size();i++){
        xor1^=i;
    }
    for(auto it:nums){
        xor2^=it;
    }

    return xor1^xor2;
    
}
int main(){
    vector<int> a{1,2,3,4,5};
    cout<<missingNumber(a);
    return 0;
}