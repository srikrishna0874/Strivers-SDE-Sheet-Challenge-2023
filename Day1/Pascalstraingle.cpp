// https://www.codingninjas.com/codestudio/problems/pascal-s-triangle_8230805?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n)
{
    vector<vector<long long>> v;
    for (int i = 0; i < n; i++)
    {
        vector<long long> temp;
        for (int j = 0; j < i + 1; j++)
        {
            if (j == 0 || j == i)
                temp.push_back(1);
            else
                temp.push_back(v[i - 1][j - 1] + v[i - 1][j]);
        }
        v.push_back(temp);
    }
    return v;
}
