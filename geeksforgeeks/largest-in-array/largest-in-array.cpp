class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        long long largest = arr[0];
        for(int i = 0;i<arr.size();i++){
            if(arr[i]>largest){
                largest = arr[i];
            }
        }
        return largest;
    }
};
