#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <unordered_map>

using namespace std;
int majorityElement(vector<int> &nums){

    /*
        https://leetcode.com/problems/majority-element/submissions/1556407601/
        optimised solution
        time complexity O(N) space complexity O(N)
        */
    unordered_map<int,int> um;
    for(auto it:nums){
        um[it]++;
    }
    for(auto it:um){
        if(it.second>nums.size()/2)
            return it.first;
    }
    return 0;
}

int majorityElement1(vector<int> &nums){
    /*
        Naive solution
        https://leetcode.com/problems/majority-element/
        time-complexity O(N*N)
        space compleity O(1)
    */
   int n=nums.size(),i=0,j=i;
   for(;i<n/2;i++){
        int count=0;
        for(j=i;j<n;j++){
            if(nums[i]==nums[j])
                count++;
        }
        if(count>n/2){
            return nums[i];
        }
   }
   return 0;
}

int majorityElement2(vector<int> &nums){
    sort(nums.begin(),nums.end());
    return nums[nums.size()/2];
}

int main(){
    vector<int> nums1{3,2,3},nums2{2,2,1,1,1,2,2};
    cout<<endl<<majorityElement1(nums1);
    cout<<endl<<majorityElement(nums2);
    return 0;
}