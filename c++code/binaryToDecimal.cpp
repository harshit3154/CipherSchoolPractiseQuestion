/*
    Program to convert binary to decimal 
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
    string s;
    cout<<"\n\n\n\t\tENTER THE VALUE OF BINARY : ";
    cin>>s;
    int a=0;
    for(int i=0;i<s.length();i++){
        a+=(s[s.length()-i-1]-'0')*pow(2,i);
    }
    cout<<"\n\n\t\tTHE DECIMAL EQUIVALENT OF THE BINARY IS :   "<<a;
    return 0;
}