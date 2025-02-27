//  https://leetcode.com/problems/jump-game/submissions/1556971174/

#include <iostream>
#include <vector>
#include <algorithm>

// Time complexity of O(N)
using namespace std;
bool canJump(vector<int> &nums){
    int step=0;
    for(int i=0;i<nums.size();i++){
        if(step>=nums.size()-1) return true;
        else if(step<=i && nums[i]==0)   return false;
        step=max(step,i+nums[i]);
    }
    return false;
}
int main(){
    vector<int> nums1{2,3,1,1,4};
    vector<int> nums2{3,2,1,0,4};
    cout<<endl<<canJump(nums1);
    cout<<endl<<canJump(nums2);
    return 0;
}