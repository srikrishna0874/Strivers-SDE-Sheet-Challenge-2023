// https://www.codingninjas.com/codestudio/problems/merge-two-sorted-arrays_8230835?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int> &nums1, vector<int> &nums2, int m, int n)
{
    // Write your code here.
    vector<int> temp;
    for (int i = 0; i < m; i++)
        temp.push_back(nums1[i]);
    int i = 0, j = 0, k = 0;
    while (i < m && j < n)
    {
        if (temp[i] == nums2[j])
        {
            nums1[k++] = temp[i];
            nums1[k++] = temp[i];
            i++;
            j++;
        }
        else if (temp[i] > nums2[j])
        {
            nums1[k++] = nums2[j];
            j++;
        }
        else
        {
            nums1[k++] = temp[i];
            i++;
        }
    }
    while (i < m)
    {
        nums1[k++] = temp[i];
        i++;
    }
    while (j < n)
    {
        nums1[k++] = nums2[j];
        j++;
    }
    return nums1;
}