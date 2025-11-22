/*
 Author:Nazmul Islam
 Created: 2025-11-22 16:44
 Using Hash Map and Prefix Sum 
 Complexity: O(n) Time and O(n) Space
*/
class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        unordered_map<int, int> m;
        int maxLength = 0;
        int prefixSum = 0;
 
        for(int i = 0; i<arr.size(); ++i){
            prefixSum += arr[i];
 
            if(prefixSum - k== 0)
                maxLength = max(maxLength, i+1);
            else if(m.find(prefixSum - k) != m.end())
                maxLength = max(maxLength, i - m[prefixSum - k]);
            
 
            if(m.find(prefixSum) == m.end())
                m[prefixSum] = i; 
        }
        return maxLength;
    }
};