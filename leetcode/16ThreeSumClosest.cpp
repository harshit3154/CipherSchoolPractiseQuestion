//  https://leetcode.com/problems/3sum-closest/submissions/1555242659/

#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;
int threeSumClosest(vector<int> &nums,int target){
    if(nums.size()<3) return 0;
    sort(nums.begin(),nums.end());
    int closestSum=nums[0]+nums[1]+nums[2];
    for(int i=0;i<nums.size();i++){
        int l=i+1,h=nums.size()-1;
        while(l<h){
            int sum=nums[i]+nums[l]+nums[h];
            if(sum==target) return sum;
            if( abs(sum-target)<abs(sum-closestSum))
                closestSum=sum;
            sum<target?l++:h--;
        }
    }
    return closestSum;
}

int main(){
    vector<int> nums{-1,2,1,-4};
    cout<<endl<<threeSumClosest(nums,1);
    vector<int> nums2{0,0,0};
    cout<<endl<<threeSumClosest(nums2,1);
    return 0;
}