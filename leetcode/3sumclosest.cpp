#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void display(vector<int> &nums){
    cout<<"\n\n\t\tThe element of the vector are : ";
    for(auto &it:nums){
        cout<<"\t"<<it;
    }
}

int threeSumClosest(vector<int> &nums,int target){
    int sum=0,ans=0;
    display(nums);
    sort(nums.begin(),nums.end());
    display(nums);
    for(int i=0;i<nums.size()-2;i++){
        int low=i+1,high=nums.size()-1;
        cout<<"\n\n\t\tThe value of high and low are : "<<low<<"\t"<<high<<endl;
        while(low<high){
            sum=nums[i]+nums[low]+nums[high];
            if(sum<target){
                low++;
            }else if(sum>target){
                high--;
            }else{
                return sum;
            }
            ans=(target-sum<target-ans)?sum:ans;
        }
    }
    return ans;
}

int main(){
    vector<int> a{-1,2,1,-4};
    cout<<threeSumClosest(a,1);
}