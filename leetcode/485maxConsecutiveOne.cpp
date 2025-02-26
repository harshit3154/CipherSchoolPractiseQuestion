//  https://leetcode.com/problems/max-consecutive-ones/submissions/1555622436/

#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;
int countMaxOne(vector<int> &nums){
    int sum=0,ans=0;
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        ans=max(sum,ans);
        sum=nums[i]==0?nums[i]:sum;
    }
    return ans;
}

int main(){
    vector<int> nums{1,0,1,1,1,0};
    cout<<countMaxOne(nums);
    return 0;
}