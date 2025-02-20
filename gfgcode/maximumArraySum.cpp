#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


/*
    Naive approach which takes time complexity of O(N*N) and space complexity of O(1)*/


int maximumsubArraySum(vector<int> &nums){
    
}
/*
    Optimised solution takes time complexity O(n) and space complexity O(1).
    Kaden's Algorithm
*/
int maximumSubArraySum(vector<int> &nums){
    int sum=nums[0],max_sum=nums[0];
    for(int i=0;i<nums.size();i++){
        sum=max(sum+nums[i],nums[i]);
        max_sum=max(sum,max_sum);
    }
    return max_sum;
}

int main(){
    vector<int> a{2, 3, -8, 7, -1, 2, 3};
    cout<<"\n\n\t\tThe maximum subsarray sum for the given array is : "<<maximumSubArraySum(a);
}