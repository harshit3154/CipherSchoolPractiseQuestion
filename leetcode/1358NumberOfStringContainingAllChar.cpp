//  https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/submissions/1570553002/?envType=daily-question&envId=2025-03-11
#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isValidSub(vector<int> &freq){
    return (freq[0]>0 && freq[1]>0 && freq[2]>0);
}

int numberOfSubString(string s){
    int count=0,l=0,n=s.length();
    vector<int> freq(3,0);
    for(int i=0;i<n;i++){
        freq[(int)(s[i]-'a')]++;
        while(isValidSub(freq)){
            count+=n-i;
            freq[(int)(s[l]-'a')]--;
            l++;
        }
    }
    return count;
}

int main(){
    cout<<numberOfSubString("abcabc");
    return 0;
}