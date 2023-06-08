#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	// if(n == 1) return arr[0];
		if(n ==1 ) return arr[0];
        sort(arr ,arr+n);
        int c  = 1 ,res=arr[0];
        
        for(int i =0 ; i< n-1; i++ ){
            if(arr[i]==arr[i+1]){
                c+=1;
            }
            else{
                c=1;
                res=arr[i+1];
            }
            if(c > n/2) return res;
        }
        return -1;
}
