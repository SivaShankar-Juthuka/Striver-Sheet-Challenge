#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>nums, int n, int K) {
	// Write your code here.
	sort(nums.begin(),nums.end());
	set<vector<int>>res;
	for(int i=0 ; i<n ;++i){
		if(i>0 && nums[i]==nums[i-1])continue;
		int l=i+1,r=n-1;
		while(l<r){
			int x=nums[i]+nums[l]+nums[r];
			if(x == K){
				res.insert({nums[i],nums[l],nums[r]});
				l++;
				r--;
			}
			else if(x > K){
				r--;
			}
			else{
				l++;
			}
		}
	}
	vector<vector<int>>res2(res.begin(),res.end());
	return res2;
}
