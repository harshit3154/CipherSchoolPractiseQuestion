/*
    We have to sort the array consisting of 0's, 1's and 2's
*/

#include  <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void display(vector<int> &nums){
    cout<<"\n\n\t\tThe element of the array are\n\n\t\t\t:";
    for(auto &it:nums){
        cout<<"\t"<<it;
    }
}

// Solving problem using inbuilt library with time complexity O(nlog(n)) and space complexity O(1)
void sort1(vector<int> &nums){
    sort(nums.begin(),nums.end());
}

//Solving problem using counting sort with time complexity O(n) and space complexity O(n)
void sort2(vector<int> &nums){
    int z=0,o=0,i=0,j=0;
    for(auto it:nums){
        if(it==0) z++;
        if(it==1) o++;
    }
    while(i<z){
        nums[i++]=0;
    }
    while(j++<o){
        nums[i++]=1;
    }
    while(i<nums.size()){
        nums[i++]=2;
    }
}

/*
    using DNF algorithm that take O(N) timecomplexity and utilize O(1) space complexity*/
void sort3(vector<int> &nums){
    int i=0,j=nums.size()-1,mid=0;
    while(mid<=j){
        if(nums[mid]==0){                                       
            swap(nums[i++],nums[mid++]);
        }else if(nums[mid]==1){
            mid++;
        }else{
            swap(nums[mid],nums[j--]);
        }
    }
}

int main(){
    vector<int> a{0,2,2,1,1,0,0,0,2};
    display(a);
    sort2(a);
    display(a);
}