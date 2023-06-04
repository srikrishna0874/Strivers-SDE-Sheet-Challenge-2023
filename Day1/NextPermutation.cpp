#include <bits/stdc++.h>
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    while (next_permutation(permutation.begin(), permutation.end()))
        break;
    return permutation;
    //  Write your code here.
}