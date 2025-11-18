/*
 Author:Nazmul Islam
 Complexity: O(n) time & O(1) space
*/

class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        int product = 1,zeroCnt = 0, idx = -1,n = arr.size();
        vector<int> res(n,0);
        for(int i = 0; i<n; ++i){
            if(arr[i] == 0){
                zeroCnt++;
                idx = i;
            }else{
                product *= arr[i];
            }
        }
        for(int i = 0; i<n; ++i){
            if(zeroCnt == 0){
                res[i] = product/arr[i];
            }else if(zeroCnt == 1){
                res[idx] = product;
            }
        }
        return res; 
    }
};
