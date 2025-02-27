#include <iostream>
#include <vector>

//https://leetcode.com/problems/maximum-subarray/

using namespace std;
class Solution {
    public:

        //Kadens algorithm to find the max subarray sum. time complexity O(N) space complexity O(1)
        int maxSubArray(vector<int>& nums) {
            int sum=nums[0];
            int max_sum=nums[0];
            for(int i=1;i<nums.size();i++){
                sum=max(nums[i],sum+nums[i]);
                max_sum=max(max_sum,sum);
            }
            return max_sum;
        }
};

int main(){
    vector<int> nums{-2,1,-3,4,-1,2,1,-5,4};
    Solution *ob=new Solution();
    cout<<ob->maxSubArray(nums);
    return 0;
}