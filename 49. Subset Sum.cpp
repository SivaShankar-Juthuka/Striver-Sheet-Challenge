#include <bits/stdc++.h> 
vector<int> subsetSum(vector<int> &num)
{
    // Write your code here.
    int n = num.size();
    vector<int>v;
    for (int i = 0; i < (1 << n); i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                sum += num[j];
            }
        }
        v.push_back(sum);
    }
    sort(v.begin(), v.end());
    return v;
}
