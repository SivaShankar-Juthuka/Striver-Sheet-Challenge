vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    // Write your code here.
    vector<vector<int>> res;
    for (int i = 0; i < (1 << n); i++) {
        int sum = 0;vector<int>v;
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                sum += arr[j];
                v.emplace_back(arr[j]);
            }
        }
        if(sum == k){
            res.emplace_back(v);
        }
    }
    return res;
}
