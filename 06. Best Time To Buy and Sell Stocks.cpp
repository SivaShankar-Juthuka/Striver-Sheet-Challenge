#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int m =INT_MIN;
    vector<int>v;
    for(int i = prices.size()-1 ; i >=0 ; i--){
        m = max(m, prices[i]);
        v.emplace_back(m);
    }
    reverse(v.begin(), v.end());
    int res = 0;
    for(int i = 0; i< v.size(); i++){
        res=max(res, v[i]-prices[i]);
    }
    return res;
}
