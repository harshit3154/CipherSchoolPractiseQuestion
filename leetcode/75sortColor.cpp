//  https://leetcode.com/problems/sort-colors/submissions/1555775335/
// DNF algorithm Dutch National Flag algorithm.
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void colorSort(vector<int> &nums){
    int l=0,mid=0,h=nums.size()-1;
    while(mid<=h){
        if(nums[mid]==1)
            mid++;
        else if(nums[mid]==0){
            swap(nums[mid++],nums[l++]);
        }else{
            swap(nums[mid],nums[h--]);
        }
    }
}

void display(vector<int> &nums){
    cout<<"\n\n\t\tThe element of the array are : ";
    for(auto &it:nums){
        cout<<"\t"<<it;
    }
}
int main(){
    vector<int> nums{1,1,0,2,2,0,1,2,1,0};
    display(nums);
    colorSort(nums);
    display(nums);
}