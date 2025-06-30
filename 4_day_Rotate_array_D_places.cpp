class Solution {
  public:

    // Function to rotate an array by d elements in counter-clockwise direction.
    void rotateArr(vector<int>& arr, int d) {
        // code here
       //Approach 1
       d = d% arr.size();
       
       rotate(arr.begin(), arr.begin()+d,arr.end());
   
       //Approach 2
    //   int N= arr.size();
        
    //     for(int i=0;i<d;i++){
    //         int first = arr[0];
    //         for(int j=0;j<N-1;j++){
    //             arr[j]=arr[j+1];
    //         }
    //         arr[N-1] = first;
    //     }
        
    }
};
