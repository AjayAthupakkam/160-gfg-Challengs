// User function template for C++
class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int ct=0;
        int N=arr.size();
        for(int i=0;i<N;i++){
            if(arr[i] != 0){
                swap(arr[i], arr[ct]);
                ct++;
                
            }
        }
       
    }
};
