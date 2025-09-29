#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &arr)
    {
        int n = arr.size();
        vector<vector<int>> ans;
        sort(arr.begin(), arr.end());

        for (int i = 0; i < n; i++)
        {
            if (ans.empty() || arr[i][0] > ans.back()[1])
            {
                ans.push_back(arr[i]);
            }
            else
            {
                ans.back()[1] = max(arr[i][1], ans.back()[1]);
            }
        }
        return ans;
    }
};
int main()
{
    Solution sol;

    vector<vector<int>> arr = {{1, 3}, {8, 10}, {2, 6}, {15, 18}};
    vector<vector<int>> ans = sol.merge(arr);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << "[" << ans[i][0] << ", " << ans[i][1] << "] ";
    }
    cout << endl;
    return 0;
}