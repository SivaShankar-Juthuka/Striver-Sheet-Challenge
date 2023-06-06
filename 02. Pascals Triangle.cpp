vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
    if(n==1) return {{1}};
    if(n==2) return {{1},{1,1}};
    vector<vector<long long int> >res;
    res={{1},{1,1}};
    for(long long int i=0; i<n-2; i++){
      vector<long long int> temp={1};
      for(long long int i=0; i<(res.back()).size()-1; i++){
        temp.emplace_back(res.back()[i]+res.back()[i+1]);
      }
      temp.emplace_back(1);
      res.emplace_back(temp);
    }
    return res;
}

// if n = 5
// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
