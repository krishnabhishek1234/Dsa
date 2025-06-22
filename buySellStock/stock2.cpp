#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int> &prices){
    int n=prices.size();
    int profit=0;
    int mini=prices[0];
    for(int i=1;i<n;i++){
        if(prices[i]<mini){
            mini=prices[i];
        }
        profit=max(profit,prices[i]-mini);
    }
    return profit;
}
int main(){
    vector<int> prices={7,1,5,3,6,4};
    int result=maxProfit(prices);
    cout<<result;
}