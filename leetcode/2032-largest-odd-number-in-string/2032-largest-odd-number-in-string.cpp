class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();
        int left = 0;
        int right = n-1;
        while(left<=right){
            if((num[right]-'0')%2!=0){
                return num.substr(left,right-left+1);
            }
            right--;
        }
        
        return "";
    }
};