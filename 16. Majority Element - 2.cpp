#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    int n=arr.size();
        if(n==1){
            return arr;
        }
        vector<int>v;
        map<int, int>mp;
        for(int i = 0 ; i< n ; i++){
            mp[arr[i]]++;
        }
        int x = n/3;
        for(auto it : mp){
            if(it.second > x){
                v.emplace_back(it.first);
            }
        }
        return v;
}
