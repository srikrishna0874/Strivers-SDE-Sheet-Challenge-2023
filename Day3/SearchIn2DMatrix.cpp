// https://www.codingninjas.com/codestudio/problems/search-in-a-2d-matrix_8230773?challengeSlug=striver-sde-challenge

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int i = 0;
    int m = matrix.size(), n = matrix[0].size();
    while (i < m)
    {
        if (matrix[i][0] <= target && matrix[i][n - 1] >= target)
        {
            if (binary_search(matrix[i].begin(), matrix[i].end(), target))
                return true;
            return false;
        }
        else
            i++;
    }
    return false;
}