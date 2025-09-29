#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    static bool comparator(vector<int>& a, vector<int>& b) {
        return a[1] < b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        int count = 0;
        sort(intervals.begin(), intervals.end(), comparator);
        //intervals[0][1] represent 0th place 2nd element like [[1,2],[2,3]] = 2
        int prevEnd = intervals[0][1];
        for (int i = 1; i < n; i++) {
            if (intervals[i][0] < prevEnd) {
                count++; // remove current
            } else {
                prevEnd = intervals[i][1]; // keep current
            }
        }
        return count;
    }
};
int main()
{
    Solution sol;

    vector<vector<int>> arr = {{1,2},{2,3},{3,4},{1,3}};
    int ans = sol.eraseOverlapIntervals(arr);
    cout << ans;
    return 0;
}