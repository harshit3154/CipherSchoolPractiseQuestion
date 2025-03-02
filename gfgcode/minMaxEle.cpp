#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;
pair<int,int> minMaxEle(vector<int> &nums){
    pair<int,int> ans;
    ans.first=nums[0];
    ans.second=nums[0];
    for(auto it:nums){
    ans.first=min(ans.first,it);
    ans.second=max(ans.second,it);
    }
    return ans;
}

int main(){
    vector<int> a{1,2,3,4,5,6,7,8,9};
    auto it=minMaxEle(a);
    cout<<"\n\n\n\t\t\tThe first and second element of the pair are : "<<it.first<<"\t"<<it.second;
    return 0;
}