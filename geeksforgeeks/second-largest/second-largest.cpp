class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        long long largest = INT_MIN;
        long long slargest = INT_MIN;
        for(int i = 0;i<arr.size();i++){
            if(arr[i]>largest){
                slargest = largest;
                largest = arr[i];
            }
            else{
                if(arr[i]!=largest && slargest<arr[i]){
                    slargest = arr[i];
                }
            }
        }
        return slargest == INT_MIN ? -1:slargest;
    }
};