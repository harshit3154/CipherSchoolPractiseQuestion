//  https://www.geeksforgeeks.org/problems/move-all-negative-elements-to-end1813/1

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void segregateElement(vector<int> &nums){
    vector<int> temp;
    for(auto it:nums){
        if(it>=0){
            temp.push_back(it);
        }
    }
    for(auto it:nums){
        if(it<0){
            temp.push_back(it);
        }
    }
    for(int i=0;i<nums.size();i++){
        nums[i]=temp[i];
    }
}

void display(vector<int> &nums){
    cout<<"\n\n\t\t\tThe elemenet of the vector are\n\n\t\t\t\t:";
    for(auto &it:nums){
        cout<<" "<<it;
    }
}

int main(){
    vector<int> nums{1,-2,9,-8,1,2,-4,5,6,4};
    display(nums);
    segregateElement(nums);
    display(nums);
    return 0;
}