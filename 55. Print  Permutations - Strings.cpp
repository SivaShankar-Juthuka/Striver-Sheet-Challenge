#include <bits/stdc++.h> 
void fun(string& nums) {
        int ind = -1;
        for(int i = nums.size()-2 ; i >= 0 ; i--){
            if(nums[i] < nums[i+1]){
                ind = i;
                break;
            }
        }
        if(ind == -1){
            reverse(nums.begin(), nums.end());
            return;
        }
        for(int i = nums.size()-1 ; i > ind ; i--){
            if(nums[i] > nums[ind]){
                swap(nums[i], nums[ind]);
                break;
            }
        }
        reverse(nums.begin()+ind+1, nums.end());
}
int fact(int n){

     return (n==0) || (n==1) ? 1 : n* fact(n-1);
}
vector<string> findPermutations(string &s) {
    // Write your code here.
    int n = s.length();
    n = fact(n);
    vector<string >v;
    while(n){
        v.emplace_back(s);
        fun(s);
        n-=1;
    }
    return v;
}
