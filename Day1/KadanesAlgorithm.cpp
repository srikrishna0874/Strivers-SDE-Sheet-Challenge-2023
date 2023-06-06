//https : // www.codingninjas.com/codestudio/problems/maximum-subarray-sum_8230694?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h>
        long long
        maxSubarraySum(int arr[], int n)
{
    long long s = 0, res = 0;
    for (int i = 0; i < n; i++)
    {
        s += arr[i];
        if (s > res)
            res = s;
        else if (s < 0)
            s = 0;
    }
    return res;
}