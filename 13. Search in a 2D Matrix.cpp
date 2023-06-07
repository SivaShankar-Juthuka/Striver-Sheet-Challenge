// Used built in function Called binary search to find Targeted Value
bool searchMatrix(vector<vector<int>>& mat, int target) {
    for(int i =0 ; i<mat.size() ; i++){
	    if(binary_search(mat[i].begin(), mat[i].end(), target)){
	        return 1;
	    }
	}
	return 0;
}

// Used Binary Search method to find Targeted value

bool searchMatrix(vector<vector<int>>& mat, int target) {
    int i = 0 , j = mat[0].size()-1;
    while(i<mat.size() && j>=0)
    {
        if(mat[i][j]<target) i++;
        else if(mat[i][j] == target) return true;
        else  j--;
     }
      return false;
}
