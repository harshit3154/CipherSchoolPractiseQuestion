/*
    Two sum solution of leetcode.
*/

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

/*
    using naive approach to check all the possible value of pair
    form using the element of array so that we can check the two sum
    
    */
vector<int> twoSum(vector<int> &nums,int sum){
    for(int i=0;i<nums.size();i++){
        for(int j=i;i<nums.size();j++){
            if(nums[i]+nums[j]==sum){
                return {i,j};
            }
        }
    }
    return {-1,-1};
}

/*
    optimising the solution of two sum to O(n) at the cost of 
    space complexity O(n)*/

vector<int> twoSum(vector<int> &nums,int sum){
    unordered_map<int,int> um;
    for(int i=0;i<nums.size();i++){
        int target=sum-nums[i];
        if(um.find(target) != um.end()){
            return {um[target],i};
        }
        um[nums[i]]=i;
    }
    return {-1,-1};
}
int main(){
    vector<int> a{1,2,3,4,5,6,7,8,9};
    cout<<"\n\n\t\tThe index of the target value are : ";
    for(auto &it:twoSum(a,10)){
        cout<<"\t"<<it;
    }
    return 0;
}