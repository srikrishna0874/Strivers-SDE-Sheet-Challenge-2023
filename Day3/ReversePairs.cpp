// https://www.codingninjas.com/codestudio/problems/reverse-pairs_8230825?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h>

int bs(vector<int> &tmp, int n)
{
    int st = 0, en = tmp.size() - 1;
    while (st <= en)
    {
        int mi = (st + en) / 2;
        if (tmp[mi] > n)
        {
            if (mi == 0)
                return tmp.size();
            else if (tmp[mi - 1] <= n)
                return tmp.size() - mi;
            else
                en = mi - 1;
        }
        else
            st = mi + 1;
    }
    return 0;
}
int reversePairs(vector<int> &arr, int n)
{
    // Write your code here.
    int res = 0;
    vector<int> tmp;
    tmp.push_back(arr[0]);
    for (int i = 1; i < n; i++)
    {
        res += bs(tmp, 2 * arr[i]);
        auto it = upper_bound(tmp.begin(), tmp.end(), arr[i]);
        tmp.insert(it, arr[i]);
    }
    return res;
}