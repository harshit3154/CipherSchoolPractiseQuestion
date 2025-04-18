#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <cmath>
#include <queue>
#include <stack>
#include <set>
#include <list>
#include <map>
#include <bitset>
#include <functional>
#include <cassert>
#include <iomanip>
#include <chrono>
#include <random>
#include <thread>
#include <future>
#include <sstream>
#include <iterator>
#include <type_traits>
#include <limits>
#include <array>
#include <tuple>
#include <memory>
#include <stdexcept>
#include <exception>
#include <cctype>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cassert>
#include <cstddef>
#include <initializer_list>
#include <typeindex>
#include <typeinfo>
#include <utility>
#include <regex>
#include <locale>
#include <random>
#include <valarray>
#include <bitset>
#include <climits>
#include <cfloat>
#include <cstdint>
#include <cinttypes>
#include <cstddef>
#include <cstdarg>
#include <cstdbool>
#include <ciso646>
#include <cuchar>
#include <cwchar>
#include <cwctype>
#include <ccomplex>
#include <csetjmp>
#include <cstdalign>
#include <cstdarg>

using namespace std; 

int rob(vector<int> &nums,vector<int> &memo,int s,int n){
    if(s>=n) return 0;
    if(memo[s]!=-1) return memo[s];
    int rob1=nums[s]+rob(nums,memo,s+2,n);
    int rob2=rob(nums,memo,s+1,n);
    memo[s]=max(rob1,rob2);
    return memo[s];
}

int rob(vector<int> &nums,int n){
    vector<int> memo(n,-1);
    return rob(nums,memo,0,n);
}

int main(){
    vector<int> nums={2,7,9,3,1};
    int n=nums.size();
    cout<<"Maximum amount of money that can be robbed: "<<rob(nums,n)<<endl;
    return 0;
}