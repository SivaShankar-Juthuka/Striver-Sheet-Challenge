#include<bits/stdc++.h>
int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
        vector<int>::iterator ip;
        ip=unique(arr.begin(), arr.begin()+n);
        arr.resize(distance(arr.begin(), ip));
        return arr.size();
}
