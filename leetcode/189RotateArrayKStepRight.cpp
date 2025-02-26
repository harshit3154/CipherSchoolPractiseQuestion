//  https://leetcode.com/problems/rotate-array/description/

#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

void rotateRight(vector<int> &nums,int k){
    // checking the codition for step greater than arrays length.
    k%=nums.size();

    // reverse the entire array.
    reverse(nums.begin(),nums.end());

    // reverse the first k element.
    reverse(nums.begin(),nums.begin()+k);

    // reverse the remaining n-k element;
    reverse(nums.begin()+k,nums.end());
}

void display(vector<int> &nums){
    cout<<"\n\n\n\t\t\tThe elements of the array are : ";
    for(auto &it:nums){
        cout<<"\t"<<it;
    }
}

vector<int> rotateRight1(vector<int> &nums,int k){
    int n=nums.size();
    k%=n;
    vector<int> temp(n);
    for(int i=0;i<n;i++){
        temp[i]=nums[(i+k-1)%n];
    }
    return temp;
}

int main(){
    vector<int> nums{1,2,3,4,5,6,7};
    display(nums);
    vector<int> n=rotateRight1(nums,3);
    display(n);
    rotateRight(nums,3);
    display(nums);
    return 0;
}