// https://www.codingninjas.com/codestudio/problems/find-duplicate-in-array_8230816?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n)
{
    // Write your code here.
    unordered_map<int, int> um;
    for (int i = 0; i < n; i++)
    {
        um[arr[i]]++;
        if (um[arr[i]] == 2)
            return arr[i];
    }
}
