//  https://www.geeksforgeeks.org/problems/binary-array-sorting-1587115620/1?page=6&category=Arrays&sortBy=submissions

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void sortBin(vector<int> &nums){
    if(nums.size()<2) return;
    int l=0,h=nums.size()-1;
    while(l<h){
        if(nums[l]==0){
            l++;
        }else if(nums[l]==1){
            swap(nums[l],nums[h--]);
        }
    }
}

void display(vector<int> &nums){
    cout<<"\n\n\n\t\tThe element of the vector are : ";
    for(auto &it:nums){
        cout<<"\t"<<it;
    }
}

int main(){
    vector<int> nums{1,1,0,0,1,1,0};
    display(nums);
    sortBin(nums);
    display(nums);
    return 0;
}