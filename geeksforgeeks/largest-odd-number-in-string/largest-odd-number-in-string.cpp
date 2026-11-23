class Solution {
  public:
    string maxOdd(string s) {
        // code here
        int n = s.size();
        int left = 0;
        int right = n-1;
        while(left<=right){
            if((s[right]-'0')%2!=0){
                return s.substr(left,right-left+1);
            }
            right--;
        }
        return "";
    }
};