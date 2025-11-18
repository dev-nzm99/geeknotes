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
/*
class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        int leftSum = 0; 
        for(const auto &x: arr) leftSum += x;
        
        int rightSum = 0;
        for(int i = 0; i<arr.size(); ++i){
            rightSum += arr[i];
            if(leftSum - rightSum == rightSum) 
                 return true;
        }
        return false;
    }
};
*/
