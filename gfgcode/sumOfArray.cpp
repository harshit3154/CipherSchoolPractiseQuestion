//  https://www.geeksforgeeks.org/problems/sum-of-array2326/1?page=6&category=Arrays&sortBy=submissions

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int sumOfArrays(vector<int> &nums){
    int i=0,j=nums.size()-1,sum=0;
    while(i<j){
        sum+=nums[i++]+nums[j--];
    }
    sum+=i==j?nums[i]:0;
    return sum;
}

int sumOfArray1(vector<int> &nums){
    int sum=0;
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
    }
    return sum;
}
int main(){
    vector<int> nums{1,2,3,4,5,6,7};
    cout<<endl<<sumOfArray1(nums);
    return 0;
}