#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
    int n = intervals.size();
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> res;
    for(auto it : intervals){
        if(res.empty() || res.back()[1] < it[0]){
            res.push_back(it);
        }
        else{
            res.back()[1] = max(res.back()[1], it[1]);
        }
    }
    return res;
}
