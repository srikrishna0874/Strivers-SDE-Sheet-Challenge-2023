// https://www.codingninjas.com/codestudio/problems/rotate-matrix_8230774?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h>

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    // Write your code here
    int to = 0, le = 0, ri = m - 1, bo = n - 1;
    while (to < bo && le < ri)
    {
        int tmp = mat[to][le];
        for (int i = le + 1; i <= ri; i++)
            swap(tmp, mat[to][i]);
        to++;
        for (int i = to; i <= bo; i++)
            swap(tmp, mat[i][ri]);
        ri--;
        for (int i = ri; i >= le; i--)
            swap(tmp, mat[bo][i]);
        bo--;
        for (int i = bo; i >= to; i--)
            swap(tmp, mat[i][le]);
        le++;
        mat[to - 1][le - 1] = tmp;
    }
}