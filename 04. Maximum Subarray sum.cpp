## Used Kadane's Algorithm to find MAximum Subarray Sum

#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    long long cur_sum = 0, max_sum = 0;
    for(int i = 0; i<n ; i++){
        cur_sum += arr[i];
        max_sum = max(max_sum, cur_sum);
        if(cur_sum <= 0){
            cur_sum = 0;
        }
    }
    return max_sum;
}



