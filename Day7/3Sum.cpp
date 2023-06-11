// https://www.codingninjas.com/codestudio/problems/3sum_8230739?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h>
vector<vector<int>> findTriplets(vector<int> arr, int n, int K)
{
    // Write your code here.
    sort(arr.begin(), arr.end());
    vector<vector<int>> res;
    for (int i = 0; i < n - 2; i++)
    {
        int j = i + 1, k = n - 1;
        while (j < k)
        {
            if (arr[i] + arr[j] + arr[k] == K)
            {
                res.push_back({arr[i], arr[j], arr[k]});
                j++;
                k--;
            }
            else if (arr[i] + arr[j] + arr[k] > K)
                k--;
            else
                j++;
        }
    }
    sort(res.begin(), res.end());
    res.erase(unique(res.begin(), res.end()), res.end());
    return res;
}