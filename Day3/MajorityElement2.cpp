// https://www.codingninjas.com/codestudio/problems/majority-element-ii_8230738?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &nums)
{
    // Write your code here.
    vector<int> v;
    unordered_map<int, int> m;
    for (int i = 0; i < nums.size(); i++)
        m[nums[i]]++;
    for (auto i : m)
        if (i.second > nums.size() / 3)
            v.push_back(i.first);
    return v;
}