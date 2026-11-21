class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count1 = 0,maxi = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]==1){
                count1++;
                maxi = max(maxi,count1);
            }
            else{
                count1 = 0;
            }
        }
        if(maxi>count1){
            return maxi;
        }
        else return count1;
    }
};