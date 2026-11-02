class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int n = arr.size();
        long long int largest = INT_MIN;
        long long int slargest = INT_MIN;
        for(int i = 0;i<n;i++){
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
        if(slargest == INT_MIN){
            return -1;
        }
        else return slargest;
    }
};