//  https://leetcode.com/problems/reverse-string/submissions/1556713043/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void reverseString(vector<char> &s){
    int l=0,h=s.size()-1;
    while(l<h){
        swap(s[l++],s[h--]);
    }
}

void display(vector<char> &s){
    cout<<"\n\n\tThe word is : ";
    for(auto &it:s){
        cout<<it;
    }
}
int main(){
    vector<char> s{'h','e','l','l','o'};
    display(s);
    reverseString(s);
    display(s);
}