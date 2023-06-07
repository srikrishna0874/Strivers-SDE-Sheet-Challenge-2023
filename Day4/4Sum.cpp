// https://www.codingninjas.com/codestudio/problems/find-four-elements-that-sums-to-a-given-value_8230785?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h>

string fourSum(vector<int> arr, int target, int n)
{
    // Write your code here.
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n - 3; i++)
    {
        for (int j = i + 1; j < n - 2; j++)
        {
            int k = j + 1, l = n - 1;
            while (k < l)
            {
                int sum = arr[i] + arr[j] + arr[k] + arr[l];
                if (sum == target)
                    return "Yes";
                if (sum < target)
                    k++;
                else
                    l--;
            }
        }
    }
    return "No";
}
