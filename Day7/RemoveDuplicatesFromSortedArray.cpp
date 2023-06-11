// https://www.codingninjas.com/codestudio/problems/remove-duplicates-from-sorted-array_8230811?challengeSlug=striver-sde-challenge

int removeDuplicates(vector<int> &arr, int n)
{
    // Write your code here.
    int i = 0, j = 1;
    while (j < n)
    {
        if (arr[i] == arr[j])
            j++;
        else
        {
            swap(arr[i + 1], arr[j]);
            i++;
            j++;
        }
    }
    return i + 1;
}