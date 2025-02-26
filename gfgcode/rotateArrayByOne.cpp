#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void rotateByOneRight(vector<int> &nums){
    // https://www.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1
    // optimised solution time complexity O(N)
    int temp=nums[0],n=nums.size();
    nums[0]=nums[n-1];
    for(int i=1;i<n;i++){
        temp=temp+nums[i];
        nums[i]=temp-nums[i];
        temp=temp-nums[i];
    }
}

void rotateByOneRight1(vector<int> &nums){
    // https://www.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1
    reverse(nums.begin(),nums.end());
    // reverse(nums.begin(),nums.begin()+1);
    reverse(nums.begin()+1,nums.end());
}

void display(vector<int> &nums){
    cout<<"\n\n\t\tThe element of the vector are\n\n\t\t\t:";
    for(auto &it:nums){
        cout<<"\t"<<it;
    }
}

int main(){
    vector<int> nums{1,2,3,4,5,6};
    display(nums);
    rotateByOneRight(nums);
    display(nums);
}