class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int curr = arr[0];
        int maxi = arr[0];
        
        for(int i=1; i<arr.size();i++){
           curr = max(arr[i], curr+arr[i]);
           maxi = max(maxi, curr);
        }
        return maxi;
    }
    
};
