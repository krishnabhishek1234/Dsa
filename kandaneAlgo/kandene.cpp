#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int n = nums.size();
        int maxi = INT_MIN;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
            if (sum > maxi)
            {
                maxi = sum;
            }
            if (sum < 0)
            {
                sum = 0;
            }
        }
        return maxi;
    }
};

int main()
{
    Solution sol;

    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int ans = sol.maxSubArray(nums);
    cout << ans << endl;
}