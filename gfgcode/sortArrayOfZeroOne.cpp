/*
    We have to sort the array consisting of 0's and 1's
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
    int z=0,i=0;
    for(auto it:nums){
        if(it==0) z++;
    }
    while(i<z){
        nums[i++]=0;
    }
    while(i<nums.size()){
        nums[i++]=1;
    }
}

/*
    using DNF(Dutch National Flag) algorithm that take O(N) timecomplexity and utilize O(1) space complexity*/
void sort3(vector<int> &nums){
    int i=0,j=nums.size()-1,mid=0;
    while(mid<=j){
        if(nums[mid]==0){                                       
            swap(nums[i++],nums[mid++]);
        }else if(nums[mid]==1){
            mid++;
        }
    }
}

int main(){
    vector<int> a{0,1,1,0,0,0,};
    display(a);
    sort3(a);
    display(a);
}