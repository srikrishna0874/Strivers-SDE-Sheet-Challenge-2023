// https://www.codingninjas.com/codestudio/problems/day-6-majority-element_8230731?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h>

int findMajorityElement(int nums[], int n)
{
    // Write your code here.
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
        m[nums[i]]++;
    for (auto i : m)
        if (i.second > n / 2)
            return i.first;
    return -1;
}