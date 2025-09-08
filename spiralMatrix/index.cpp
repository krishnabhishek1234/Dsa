#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> spiral(vector<vector<int>> &matrix)
    {
        int n = matrix.size();    // row
        int m = matrix[0].size(); // column
        vector<int> ans;

        int top = 0, left = 0, bottom = n - 1, right = m - 1;

        while (top <= bottom && left <= right)
        {

            // left to right
            for (int i = left; i <= right; i++)
            {
                ans.push_back(matrix[top][i]);
            }
            top++;

            // top to bottom
            for (int i = top; i <= bottom; i++)
            {
                ans.push_back(matrix[i][right]);
            }
            right--;

            // right to left
            if (top <= bottom)
            {
                for (int i = right; i >= left; i--)
                {
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--;
            }

            // bottom to top
            if (left <= right)
            {
                for (int i = bottom; i >= top; i--)
                {
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return ans;
    }
};

int main()
{
    Solution sol;
    vector<vector<int>> matrix{{1, 2, 3, 4},
                               {5, 6, 7, 8},
                               {9, 10, 11, 12},
                               {13, 14, 15, 16}};

    vector<int> ans = sol.spiral(matrix);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}