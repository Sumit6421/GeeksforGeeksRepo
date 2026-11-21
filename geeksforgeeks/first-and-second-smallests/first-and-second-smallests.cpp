class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
        // code here
        long long smallest = INT_MAX;
        long long ssmallest = INT_MAX;
        for(int i = 0;i<arr.size();i++){
            if(arr[i]<smallest){
                ssmallest = smallest;
                smallest = arr[i];
            }
            else {
                if(arr[i]!=smallest && arr[i]<ssmallest){
                    ssmallest = arr[i];
                }
            }
        }
        if(ssmallest==INT_MAX){
            return {-1};
        }
        else return {smallest,ssmallest};
        
        
    }
};