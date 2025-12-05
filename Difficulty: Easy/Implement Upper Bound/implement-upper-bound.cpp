/*
 Author:Nazmul Islam
*/
class Solution {
  public:
    int upperBound(vector<int>& arr, int target) {
        int n = arr.size();
        int left = 0;
        int right = n-1;
        int res = n;
        while(left<=right){
            int mid = left+(right-left)/2;
            if(arr[mid]>target){
                res = mid;
                right = mid-1;
            }else{
                left = mid+1;
            }
        }
        return res;
    }
};
