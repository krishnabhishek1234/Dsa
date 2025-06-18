#include<bits/stdc++.h>
using namespace std;
int maximumProfit(vector<int> &nums){
    int maxi=0;
    int mini=nums[0];
    int n=nums.size();
    for(int i=1;i<n;i++){
        int cost=nums[i]-mini;
        maxi=max(maxi,cost);
        mini=min(mini,nums[i]);
    }
    return maxi;
}
int main(){
    vector<int> nums={7,1,5,3,6,4};
    int result = maximumProfit(nums);
    cout<< result;
}