#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void display(vector<int> &nums){
    cout<<"\n\n\t\tThe element of the array are : ";
    for(auto it:nums){
        cout<<"\t"<<it;
    }
}
int maxInArray(vector<int> &nums){
    int target=nums[0];
    for(int i=1;i<nums.size();i++){
        target=target<nums[i]?nums[i]:target;
    }
    return target;
}

int minInArray(vector<int> &nums){
    int min=nums[0];
    for(int i =1;i<nums.size();i++){
        min=min>nums[i]?nums[i]:min;
    }
    return min;
}

int sum(vector<int> &nums){
    int sum=0;
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
    }
    return sum;
}

double avg(vector<int> &nums){
    return (double)sum(nums)/nums.size();
}

void sortZerosOnes(vector<int> &nums){
    int zeros=0;
    for(auto &it:nums){
        if(it==0)
            zeros++;
    }
    int i=0;
    while(i<zeros){
        nums[i++]=0;
    }
    while(i<nums.size()){
        nums[i++]=1;
    }
}

void sortZerosOnesDNP(vector<int> &nums){
    int l=0,mid=0,h=0;
    while(mid<h){
        if(nums[mid]==0){
            mid++;
            l++;
        }else{
            swap(nums[mid],nums[h]);
            h--;
        }
    }
}

void reverseArray(vector<int> &nums){
    int l=0,h=nums.size()-1;
    while(l<h){
        swap(nums[l++],nums[h--]);
    }
}

bool isSorted(vector<int> nums){
    bool asc=true,dec=true;
    for(int i=1;i<nums.size();i++){
        if(nums[i-1]>nums[i])
            asc=false;
        if(nums[i-1]<nums[i])
            dec=false;
    }
    return asc || dec;
}

int second_largest(vector<int> &nums){
    if(nums.size()<2){
        return -1;
    }
    int l=nums[0],sl=nums[0];
    for(int i=1;i<nums.size();i++){
        if(nums[i]>l){
            sl=l;
            l=nums[i];
        }
    }
    return sl;
}

int main(){
    vector<int> a{1,2,3,4,5,6,7,8,9,10};
    display(a);
    cout<<endl<<maxInArray(a)<<endl;
    cout<<minInArray(a)<<endl;
    cout<<sum(a)<<endl;
    cout<<avg(a);
    cout<<second_largest(a);
    cout<<isSorted(a);
    vector<int> b{1,0,1,0,1,0};
    display(b);
    cout<<endl<<isSorted(b);
    sortZerosOnes(b);
    display(b);
    cout<<endl<<isSorted(b);
    return 0;
}