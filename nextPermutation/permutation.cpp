#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        int a = nums.size();
        int ind = -1;

        // Step 1: Find the breakpoint
        for (int i = a - 2; i >= 0; i--)
        {
            if (nums[i] < nums[i + 1])
            {
                ind = i;
                break;
            }
        }

        // If no breakpoint is found, reverse the entire array
        if (ind == -1)
        {
            reverse(nums.begin(), nums.end());
            return;
        }

        // Step 2: Find the element just larger and swap
        for (int i = a - 1; i > ind; i--)
        {
            if (nums[i] > nums[ind])
            {
                swap(nums[i], nums[ind]);
                break;
            }
        }

        // Step 3: Reverse the suffix
        reverse(nums.begin() + ind + 1, nums.end());
    }
};