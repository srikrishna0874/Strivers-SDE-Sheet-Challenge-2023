// https://www.codingninjas.com/codestudio/problems/longest-subarray-zero-sum_8230747?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector<int> A)
{

    // Write your code here
    int s = 0, ma = 0, n = A.size();
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        s += A[i];
        if (s == 0)
            ma = i + 1;
        else if (m.find(s) != m.end())
            ma = max(ma, i - m[s]);
        else
            m[s] = i;
    }
    return ma;
}