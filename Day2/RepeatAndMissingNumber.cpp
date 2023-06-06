// https://www.codingninjas.com/codestudio/problems/missing-and-repeating-numbers_8230733?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h>

pair<int, int> missingAndRepeating(vector<int> &arr, int n)
{
    // Write your code here
    int tmp[n + 1] = {0};
    int rep = -1, mis = -1;
    for (int i = 1; i <= n; i++)
    {
        tmp[arr[i - 1]]++;
        if (tmp[arr[i - 1]] == 2)
        {
            rep = arr[i - 1];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (tmp[i] == 0)
        {
            mis = i;
            break;
        }
    }
    return {mis, rep};
}
