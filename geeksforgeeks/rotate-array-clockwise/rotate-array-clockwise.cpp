class Solution {
  public:
  void reverse(vector<int> &nums,int left,int right){
          while(left<=right){
              int temp = nums[left];
              nums[left] = nums[right];
              nums[right] = temp;

              left++;
              right--;
          }
     }
    void rotateclockwise(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        k = k%n;
        reverse(arr,0,n-1);
        reverse(arr,0,k-1);
        reverse(arr,k,n-1);
        
        
    }
};
