#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int ele;
        int count = 0;

        for (int i = 0; i < n; i++) {
            if (count == 0) {
                count = 1;
                ele = nums[i];
            } else if (nums[i] == ele)
                count++;
            else
                count--;
        }
        int majorCount = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == ele)
                majorCount++;
        }
        if (majorCount > n / 2)
            return ele;
        return -1;
    }
};
int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    Solution sol;
    int result = sol.majorityElement(nums);

    if (result != -1)
        cout << "Majority element is: " << result << endl;
    else
        cout << "No majority element found." << endl;

    return 0;
}