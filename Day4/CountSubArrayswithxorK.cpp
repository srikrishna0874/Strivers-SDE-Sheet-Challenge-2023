// https://www.codingninjas.com/codestudio/problems/count-subarrays-with-given-xor_8230830?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x)
{
    //    Write your code here.
    unordered_map<int, int> um;
    int res = 0, xo = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        xo ^= arr[i];
        if (xo == x)
            res++;
        if (um.find(xo ^ x) != um.end())
            res += um[xo ^ x];
        um[xo]++;
    }
    return res;
}