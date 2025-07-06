// User function template for C++

class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        // code here
        int N = arr.size();
        sort(arr.begin(),arr.end());
        
        int res = arr[N-1] - arr[0];
        
        
        for(int i=1;i<N;i++){
            if(arr[i]-k <0){
                continue;
            }
            int minHeight = min(arr[0]+k, arr[i]-k);
            int maxHeight = max(arr[i-1]+k, arr[N-1]-k);
            
            res = min(res, maxHeight-minHeight);
        }
        return res;
    }
};
