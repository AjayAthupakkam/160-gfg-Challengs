class Solution {
  public:
    vector<int> findMajority(vector<int>& arr) {
        // Code here
        map<int,int> mp;
        vector<int> dup;
        int N= arr.size();
        N = N/3;
        for(auto i:arr){
            mp[i]++;
        }
        for(auto i:mp){
            if(i.second>N){
                dup.push_back(i.first);
            }
        }
        return dup;
        
        // int N= arr.size();
        // sort(arr.begin(), arr.end());
        // vector<int> ans;
        // for(int i=0;i<N-1;i++){
        //     if(arr[i] == arr[i+1]){
        //         if(ans.empty() || ans.back() !=arr[i] ){
        //             ans.push_back(arr[i]);
        //         }
        //     }
        // }
        // sort(ans.begin(),ans.end());
        // return ans;
        
        
        
        
    }
};
