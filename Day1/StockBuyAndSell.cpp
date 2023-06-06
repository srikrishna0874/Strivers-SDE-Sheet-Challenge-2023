#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int mi=INT_MAX,ma=INT_MIN;
        for(int i=0;i<prices.size();i++)
        {
            mi=min(mi,prices[i]);
            ma=max(ma,prices[i]-mi);
        }
        return ma;
}