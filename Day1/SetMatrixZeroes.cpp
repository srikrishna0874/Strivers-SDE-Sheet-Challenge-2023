// https://www.codingninjas.com/codestudio/problems/set-matrix-zeros_8230862?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
    // Write your code here.
    unordered_set<int> se1, se2;
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            if (matrix[i][j] == 0)
            {
                se1.insert(i);
                se2.insert(j);
            }
        }
    }
    for (auto it : se1)
        for (int i = 0; i < matrix[0].size(); i++)
            matrix[it][i] = 0;
    for (auto it : se2)
        for (int i = 0; i < matrix.size(); i++)
            matrix[i][it] = 0;
}