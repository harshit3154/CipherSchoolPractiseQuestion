//  https://www.geeksforgeeks.org/problems/binary-search-1587115620/1?page=1&category=Arrays&sortBy=submissions


/* 
    Program to find the smallest index of element given for searching in a sorted array
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int binarySearch(vector<int> &nums,int k){
    int n=nums.size();
    int l=0,h=n-1,ans=-1;
    while(l<=h){
        int mid=l+(h-l)/2;
        if(nums[mid]==k){
            ans=mid;
            l=0;
            h=mid-1;
        }else if(nums[mid]<k){
            l=mid+1;
        }else{
            h=mid-1;
        }
    }
    return ans;
}

int main(){
    vector<int> nums{1,0,2,2,2,3,4,5};
    cout<<endl<<binarySearch(nums,2);
}