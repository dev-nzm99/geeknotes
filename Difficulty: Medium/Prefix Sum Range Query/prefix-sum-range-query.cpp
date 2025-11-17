/*
 Author:Nazmul Islam
 Created: 2025-11-17 19:57
*/
class Solution {
  public:
    vector<int> rangeSumQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n = arr.size();
        vector<int> res;
        vector<int> prefixArr(n,0);
        
        prefixArr[0] = arr[0];
        for(int i = 1; i<n; ++i){
            prefixArr[i] = prefixArr[i-1]+arr[i];
        }
        
        for(const auto &row: queries){
            int L = row[0], R = row[1];
            int sum = prefixArr[R] - (L > 0 ? prefixArr[L-1]:0);
            res.push_back(sum);
        }
        return res;
    }
};