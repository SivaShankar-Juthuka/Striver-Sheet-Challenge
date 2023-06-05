###Brute force that finds out the positions of zero in the matrix

void setZeros(vector<vector<int>> &matrix){
	// Write your code here.
	vector<int>row;
	vector<int>col;
	for(int i = 0; i<matrix.size(); i++){
		for(int j = 0; j<matrix[i].size(); j++){
			if(matrix[i][j] == 0){
				row.push_back(i);
				col.push_back(j);
			}
		}
	}
	for(int k = 0; k<row.size(); k++){
		for(int i = 0; i<matrix.size(); i++){
			for(int j = 0; j<matrix[i].size(); j++){
         if (i == row[k] or j == col[k]) {
             matrix[i][j] = 0;
         }
      }
    }
	}
}

###Optimized code 


void setZeros(vector<vector<int>> &matrix){
	// Write your code here.
        bool flag1 = false, flag2 = false;
        for(int i=0; i<matrix.size(); i++){
            if(matrix[i][0] == 0){
                flag1 = true;
            }
        }
        for(int j=0; j<matrix[0].size(); j++){
            if(matrix[0][j] == 0){
                flag2 = true;
            }
        }
        for(int i=1; i<matrix.size(); i++){
            for(int j=1; j<matrix[0].size(); j++){
                if(matrix[i][j] == 0){
                    matrix[i][0] = matrix[0][j] = 0;
                }
            }
        }
        for(int i=1; i<matrix.size(); i++){
            for(int j=1; j<matrix[0].size(); j++){
                if(matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }
        if(flag1 == true){
            for(int i=0; i<matrix.size(); i++){
                matrix[i][0] = 0;
            }
        }
        if(flag2 == true){
            for(int j=0; j<matrix[0].size(); j++){
                matrix[0][j] = 0;
            }
        }
}
