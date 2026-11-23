class Solution {
  public:
  void reverse(vector<int> &arr,int left,int right){
      while(left<right){
          int temp = arr[left];
          arr[left] = arr[right];
          arr[right] = temp;
          left++;
          right--;
      }
  }
    void rotateArr(vector<int>& arr, int d) {
        // code here
        int n = arr.size();
        d = d%n;
        reverse(arr,0,n-1);
        reverse(arr,0,n-d-1);
        reverse(arr,n-d,n-1);
        
        
    }
};