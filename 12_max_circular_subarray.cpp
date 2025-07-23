class Solution {
  public:
    int maxCircularSum(vector<int> &arr) {
        // code here
        int total = 0;
        
        int max_sum = arr[0];
        int cur_max = 0;
        
        int min_sum = arr[0];
        int cur_min = 0;
        
        for(int a : arr){
            cur_max = max(a,cur_max+a);
            max_sum = max(max_sum, cur_max);
            
            cur_min = min(a, cur_min+a);
            min_sum = min(min_sum, cur_min);
            
            total +=a;
            
        }
        
        if(max_sum<0) return max_sum;
        
        return max(max_sum, total-min_sum);
    }
};
