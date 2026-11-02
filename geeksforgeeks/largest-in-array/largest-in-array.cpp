class Solution {
  public:
    int largest(vector<int> &arr) {
    int maxi = arr[0];
    if(arr.size()==1) return arr[0];
    for(int i = 0;i<arr.size();i++){
        maxi = max(maxi,arr[i]);
        
    }
    return maxi;
    }
};
