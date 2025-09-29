#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int solve(vector<int> &dp, int n)
    {
        if (n <= 1)
            return n;
        if (dp[n] != -1)
            return dp[n];
        return dp[n] = solve(dp, n - 1) + solve(dp, n - 2);
    }

    int fibo(int n)
    {
        vector<int> num(n+1,-1);
        return solve(num, n);
    }
};

int main()
{
    Solution sol;
    int ans = sol.fibo(6);
    cout<<ans;
}