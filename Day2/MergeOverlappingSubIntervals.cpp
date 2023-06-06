// https://www.codingninjas.com/codestudio/problems/merge-intervals_8230700?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h>
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> res;
    int st = intervals[0][0], en = intervals[0][1];
    for (int i = 0; i < intervals.size(); i++)
    {
        if (intervals[i][0] > en)
        {
            res.push_back({st, en});
            st = intervals[i][0];
            en = intervals[i][1];
        }
        else if (intervals[i][1] > en)
            en = intervals[i][1];
    }
    res.push_back({st, en});
    return res;
}
