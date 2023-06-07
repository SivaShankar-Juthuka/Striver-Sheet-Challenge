// Optimal Code 

#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
	int i = m-1, j = n-1, k = m + n - 1;
    while(j >= 0) {
        if(i >= 0 && arr1[i] > arr2[j]) {
			arr1[k--] = arr1[i--];
        } 
        else{
            arr1[k--] = arr2[j--];
        }
	}
	return arr1;
}

// Kind of Brute Force

#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
	for(int i = 0; i<n;i++){
        arr1.pop_back();
    }
    for(int i= 0 ;i<n; i++){
        arr1.emplace_back(arr2[i]);
    }
    sort(arr1.begin(), arr1.end());
    return arr1;
}
