//  https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// applying burte force algorithm time complexity O(N^2) and space complexity O(1)
int maxProfit(vector<int> &prices){
    int profit=0;
    for(int i=0;i<prices.size();i++){
        for(int j=i+1;j<prices.size();j++){
            if(prices[i]<prices[j])
                profit=max(profit,prices[j]-prices[i]);
        }
    }
    return profit;
}

//Optimising the solution to O(N) and space complexity O(1)
int maxProfit1(vector<int> &prices){
    int profit=0,buy=prices[0];
    for(int i=1;i<prices.size();i++){
        if(prices[i]>buy)
            profit=max(profit,prices[i]-buy);
        buy=min(buy,prices[i]);
    }
    return profit;
}
int main(){
    vector<int> prices{7,1,5,3,6,4};
    cout<<maxProfit1(prices);
    cout<<endl<<maxProfit(prices);

    vector<int> price{7,6,4,3,1};
    cout<<endl<<endl<<maxProfit1(price);
    cout<<endl<<maxProfit(price);
    return 0;
}