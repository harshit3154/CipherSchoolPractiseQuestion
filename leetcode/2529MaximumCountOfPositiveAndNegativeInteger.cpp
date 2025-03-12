//  https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/description/

#include <iostream>
#include <vector>

using namespace std;

int maxCountPositiveNegative(vector<int> &ele){
    int p=0,n=0;
    for(auto &it:ele){
        if(it==0)   continue;
        it>0?p++:n++;
    }
    return p>n?p:n;
}

int main(){
    vector<int> nums1{-3,-2,-1,0,0,1,2},nums2{-2,-1,-1,1,2,3},nums3{5,20,66,1314};
    cout<<endl<<maxCountPositiveNegative(nums1);
    cout<<endl<<maxCountPositiveNegative(nums2);
    cout<<endl<<maxCountPositiveNegative(nums3);
    return 0;
}