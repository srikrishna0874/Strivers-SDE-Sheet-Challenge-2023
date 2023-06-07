// https://www.codingninjas.com/codestudio/problems/longest-consecutive-sequence_8230708?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &nums, int n)
{
    // Write your code here.
    int c = 0, ma = 1;
    if (nums.size() == 0)
        return 0;
    set<int> se(nums.begin(), nums.end());
    vector<int> num(se.begin(), se.end());
    // for(int i=0;i<num.size();i++) cout<<num[i]<<" ";
    for (int i = 0; i < num.size() - 1; i++)
    {
        if (num[i + 1] == num[i] + 1)
            c++;
        else
        {
            ma = max(ma, c + 1);
            c = 0;
        }
    }
    return max(ma, c + 1);
}