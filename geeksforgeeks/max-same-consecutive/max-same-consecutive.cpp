class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        // code here
        int count1 = 0,maxi1 = 0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==1){
                count1++;
                maxi1= max(maxi1,count1);
            }
            else{
                count1 = 0;
            }
        }
        int count0 = 0,maxi0 = 0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
                count0++;
                maxi0= max(maxi0,count0);
            }
            else{
                count0 = 0;
            }
        }
        if(maxi0>maxi1) return maxi0;
        else return maxi1;
        
    }
};