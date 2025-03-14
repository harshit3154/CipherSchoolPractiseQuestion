//  https://leetcode.com/problems/maximum-product-subarray/submissions/1573562879/
#include <iostream>
#include <vector>
#include <climits>

using namespace std;
int maxProductSubarray(vector<int> &nums){
    int pre=1,suf=1,ans=INT_MIN;
    for(int i=0;i<nums.size();i++){
        pre*=nums[i];
        suf*=nums[i];
        ans=max(ans,max(pre,suf));
    }
    cout<<"\n\n\t\tThe maximum product of the array is : "<<ans;
    return ans;
}

int main(){
    vector<int> nums{-1,0,-2};
    maxProductSubarray(nums);
    return 0;
}