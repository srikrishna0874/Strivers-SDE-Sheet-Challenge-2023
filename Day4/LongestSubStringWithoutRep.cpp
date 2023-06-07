// https://www.codingninjas.com/codestudio/problems/longest-substring-without-repeating-characters_8230684?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h>
int uniqueSubstrings(string s)
{
    // Write your code here
    unordered_map<char, int> m;
    int c = 0, ma = INT_MIN;
    for (int i = 0; i < s.length(); i++)
    {
        if (m.find(s[i]) == m.end() || i - m[s[i]] > c)
            c++;
        else
        {
            ma = max(ma, c);
            c = i - m[s[i]];
        }
        m[s[i]] = i;
    }
    return max(ma, c);
}