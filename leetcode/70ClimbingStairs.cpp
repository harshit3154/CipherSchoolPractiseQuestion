#include <iostream>
#include <vector>
// https://leetcode.com/problems/climbing-stairs/submissions/1610080984/
using namespace std;
class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) return n;
        std::vector<int> dp(n + 1, 0);
        dp[1] = 1;
        dp[2] = 2;
        for (int i = 3; i <= n; ++i) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        return dp[n];
    }
    int climbStairs(int m,vector<int> &memo) {
        if(memo[m] != -1) return memo[m];
        if(m<3) {
            memo[m] = m;
            return memo[m];
        }
        memo[m-1]=climbStairs(m-1,memo);
        memo[m-2]=climbStairs(m-2,memo);
        memo[m] = memo[m-1] + memo[m-2];
        return memo[m];
    }
    int climbStairs2(int n) {
        vector<int> memo(n + 1, -1);
        return climbStairs(n, memo);
    }
};

int main() {
    Solution solution;
    int n;
    std::cout << "Enter the number of stairs: ";
    std::cin >> n;
    std::cout << "Number of ways to climb " << n << " stairs: " << solution.climbStairs(n) << std::endl;
    std::cout << "Number of ways by method2 to climb using  " << n << " stairs: " << solution.climbStairs2(n) << std::endl;
    return 0;
}