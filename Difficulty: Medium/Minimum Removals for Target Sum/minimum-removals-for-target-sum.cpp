/*
  Author:Nazmul Islam
  Created: 2025-11-23 10:35
  Using Prefix sum + Hash table
  Complexity: O(n) time & O(n) space
*/
class Solution {
  public:
    int minRemovals(vector<int> &arr, int k) {
        int n = arr.size();
        int totalSum  = 0;
        for(const auto &x : arr) totalSum += x;
        
         if(k == totalSum){
             return n;
         }
        
        unordered_map<int, int> m;
        int X = totalSum - k;
        int S = 0;
        int len = -1;
        for(int i = 0; i < n; ++i){
            S += arr[i];
            
            int target = S - X;
            if(target == 0){
                len = i+1;
            }else if(m.find(target) != m.end()){
                len = max(len, i-m[target]);
            }
        
            if(m.find(S) == m.end())
                m[S] = i;
        }
        return (len == -1)?-1:n-len;
    }
};