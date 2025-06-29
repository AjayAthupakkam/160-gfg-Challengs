class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        
        //Approach 1
        int N= arr.size();
        int left=0,right=N;
        
        while(left<right){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
        
        // Approach 2 using stl
        // reverse(arr.begin(),arr.end());
        
    }
};
