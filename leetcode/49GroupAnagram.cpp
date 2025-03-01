// https://leetcode.com/problems/group-anagrams/submissions/1559522222/?envType=problem-list-v2&envId=string

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;
vector<vector<string>> groupAnagram(vector<string> &str){
    vector<vector<string>> ans;
    unordered_map<string,vector<string>> um;
    for(auto &it:str){
        string dup=it;
        sort(dup.begin(),dup.end());
        if(um.find(dup)==um.end()){
            um[dup]={it};
        }else{
            um[dup].push_back(it);
        }
    }
    for(auto it:um){
        ans.push_back(it.second);
    }
    return ans;
}

int main(){
    vector<string> str={"eat","tea","tan","ate","nat","bat"};
    cout<<"\n\n\t\tThe element of the string are\n\n\t\t\t:";
    for(auto it:str){
        cout<<"\t"<<it;
    }
    vector<vector<string>> ans=groupAnagram(str);
    cout<<"\n\n\n\t\t\tThe group of anagram are\n\n\t\t\t:";
    for(auto it:ans){
        cout<<"  [";
        for(auto ele:it){
            cout<<ele<<",  ";
        }
        cout<<" ]\n\n\t\t\t";
    }
    return 0;
}