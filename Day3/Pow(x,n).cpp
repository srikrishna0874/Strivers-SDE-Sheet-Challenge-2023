// https://www.codingninjas.com/codestudio/problems/modular-exponentiation_8230803?challengeSlug=striver-sde-challenge

#include <bits/stdc++.h>
long sri(long x, long n, long m)
{
    if (n == 0)
        return 1;
    long tmp = sri(x, n / 2, m);
    long res = (tmp * tmp) % m;
    if (n % 2 == 1)
        return (res * x) % m;
    return res;
}
int modularExponentiation(int x, int n, int m)
{
    // Write your code here.
    return (int)(sri((long)x, (long)n, (long)m));
}