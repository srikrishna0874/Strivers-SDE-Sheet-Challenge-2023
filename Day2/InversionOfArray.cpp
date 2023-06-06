// https://www.codingninjas.com/codestudio/problems/count-inversions_8230680?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h>
long long getInversions(long long *arr, int n)
{
    // Write your code here.
    unordered_map<long long, long long> um;
    long long res = 0;
    for (int i = 0; i < n; i++)
    {
        for (auto it : um)
        {
            if (it.first > arr[i])
                res += it.second;
        }
        um[arr[i]]++;
    }
    return res;
}