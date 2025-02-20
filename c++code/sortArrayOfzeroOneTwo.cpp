#include <iostream>
#include <vector>

using namespace std;
void display(vector<int> &nums){
    cout<<"\n\n\t\tThe element of the array are\n\n\t\t\t:";
    for(auto &it:nums){
        cout<<"\t"<<it;
    }
}

void sort(vector<int> &nums){
    int zeros=0,one=0;
    for(auto &it:nums){
        if(it==0) zeros++;
        else if(it==1) one++;
    }
    int i=0,j=0;
    while(i<zeros){
        nums[i++]=0;
    }
    while(j<one){
        nums[i++]=1;
        j++;
    }
    while(i<nums.size()){
        nums[i++]=2;
    }
}

void sort2(vector<int> &nums){
    int l=0,h=nums.size()-1;
    while(l<h){
        if(nums[l]==1 || nums[h]==0 && nums[l]!=nums[h]){
            swap(nums[l],nums[h]);
            l++;
            h--;
        }else if(nums[l]==0)
            l++;
        else if(h==1)
            h--;
    }
}

int main(){
    vector<int> a{0,0,1,2,2,1,0,1,0,2,};
    display(a);
    sort(a);
    display(a);
}