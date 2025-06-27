class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int i = 0;
        int N = arr.size();
        int largest = arr[i];
        int secondLargest = -1;
        
        for(int i=0;i<N; ++i){
            if(arr[i]> largest){
                secondLargest = largest;
                largest = arr[i];
            }
            else{
                if(arr[i] < largest && arr[i] > secondLargest){
                    secondLargest = arr[i];
                }
            }
        }
        return secondLargest;
        
    }
};
