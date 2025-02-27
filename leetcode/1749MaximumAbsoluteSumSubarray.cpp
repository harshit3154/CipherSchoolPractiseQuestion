#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int maxAbsoluteSum(vector<int> &nums){
    int max_sum=nums[0],sum=nums[0];
    int min_sum=nums[0],temp=nums[0];
    for(int i=1;i<nums.size();i++){
        sum=max(nums[i],sum+nums[i]);
        max_sum=max(max_sum,sum);
        temp=min(nums[i],nums[i]+temp);
        
    }
}