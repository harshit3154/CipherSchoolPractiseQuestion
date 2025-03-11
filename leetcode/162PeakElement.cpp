//  https://leetcode.com/problems/find-peak-element/description/

#include <iostream>
#include <vector>
#include <climits>

using namespace std;
int findPeakElement(vector<int> &nums){
    int l=0,h=nums.size();
    while(l<h){
        int mid=l+(h-l)/2;
        int lower=mid>0?nums[mid-1]:INT_MIN;
        int higher=mid<nums.size()?nums[mid+1]:INT_MIN;
        if(nums[mid]>lower && nums[mid]>higher){
            return mid;
        }else if(nums[mid]>lower){
            l=mid+1;
        }else{
            h=mid-1;
        }
    }
    return l;
}

int main(){
    vector<int> nums{1,2,3,1};
    cout<<"\n\n\t\tThe find peak element of the array is : "<<findPeakElement(nums);
    return 0;
}