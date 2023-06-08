#include <bits/stdc++.h>

string fourSum(vector<int> arr, int target, int n) {
    // Write your code here.
        sort(arr.begin(), arr.end());
        vector<vector<int>> res;
        for(int i=0; i<n-3; i++){
            for(int j=i+1; j<n-2; j++){
                long long nt = (long long)target - (long long)arr[i] - (long long)arr[j];
                int low = j+1, high = n-1;
                while(low < high){
                    if(arr[low] + arr[high] < nt){
                        low++;
                    }
                    else if(arr[low] + arr[high] > nt){
                        high--;
                    }
                    else{
                        res.push_back({arr[i], arr[j], arr[low], arr[high]});
                        int tempIndex1 = low, tempIndex2 = high;
                        while(low < high && arr[low] == arr[tempIndex1]) low++;
                        while(low < high && arr[high] == arr[tempIndex2]) high--;
                    }
                }
                while(j+1 < n && arr[j] == arr[j+1]) j++;
            }
            while(i+1 < n && arr[i] == arr[i+1]) i++;
        }
        if(res.size() > 0) return "Yes";
        else return "No";
}
