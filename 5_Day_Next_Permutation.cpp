class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        // code here
        //Approach 1
        int n = arr.size();
        int ind = -1;
        
        for(int i=n-2; i>=0; i--){
            if(arr[i]<arr[i+1]){
                ind = i;
                break;
            }
        }
        if(ind == -1){
            reverse(arr.begin(),arr.end());
        }
        
        for(int i=n-1; i>ind;i--){
            if(arr[i] > arr[ind]){
                swap(arr[i], arr[ind]);
            }
        }
        
        reverse(arr.begin()+ind, arr.end());
        
        //Approach 2 
        // next_permutation(arr.begin(),arr.end());
    }
};
