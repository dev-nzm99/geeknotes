/*
 Author:Nazmul Islam
 Complexity: O(n) time & O(1) Space
*/
class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        int n = arr.size();
        for(int i = 1; i<n; ++i)
           arr[i] = arr[i-1] + arr[i];
        for(int i = 0; i<n; ++i)
            if(arr[n-1]-arr[i] == arr[i])
               return true;
        return false;
    }
};
