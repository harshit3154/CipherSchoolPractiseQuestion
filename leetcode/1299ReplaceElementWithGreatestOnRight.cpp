#include <iostream>
#include <vector>

using namespace std;

vector<int> replaceGreatestRight(vector<int> &nums){
    //https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/submissions/1556447689/
    // Naive solution time complexity O(N) space complexity O(N)
    vector<int> ans(nums.size(),-1);
    for(int i=0;i<nums.size()-1;i++){
        int ele=nums[i+1];
        for(int j=i+1;j<nums.size();j++){
            ele=max(ele,nums[j]);
        }
        ans[i]=ele;
    }
    return ans;
}

void display(vector<int> &nums){
    cout<<"\n\n\t\tThe element of the vector are\n\n\t\t\t:";
    for(auto &it:nums){
        cout<<"\t"<<it;
    }
}

int main(){
    vector<int> nums1{7,18,5,4,6,1};
    display(nums1);
    vector<int> nums2=replaceGreatestRight(nums1);
    display(nums2);
    nums1={400};
    display(nums1);
    nums2=replaceGreatestRight(nums1);
    display(nums2);
    return 0;
}