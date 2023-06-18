#include <bits/stdc++.h> 
vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    // Write your code here.
    
    vector<vector<int>>res;
    for (int i = 0; i < (1 << n); i++) {
        vector<int>a;
        for (int j = 0; j < n; j++) {
          if (i & (1 << j)) {
            a.emplace_back(arr[j]);
          }
        }
        sort(a.begin(), a.end());
        res.push_back(a);
    }
    map<vector<int> , int>mp;
    for(int i = 0; i< res.size(); i++){
         mp[res[i]]++;
    }
    res.clear();
    for(auto it : mp){
        res.push_back(it.first);
    }
    return res;
}
