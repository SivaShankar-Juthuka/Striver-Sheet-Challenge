#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	vector<int> v(n, 0);
	int rep, mis;
	for(int i = 0; i<n; i++){
		int x = arr[i];
		if(v[x-1] == -1){
			rep = x;
		}
		v[x - 1] = -1;
	}
	for(int i= 0; i<n; i++){
		if(v[i] == 0){
			mis = i+1;
		}
	}
	return {mis, rep};
}
