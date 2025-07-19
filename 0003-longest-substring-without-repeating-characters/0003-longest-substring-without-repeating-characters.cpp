class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int maxLen=0;
        
        for(int i = 0;i<n;i++){
            for(int j=i;j<n;j++){
                int res = 1;
                for(int k = i ; k<j;k++){
                    if(s[k]==s[j]){
                        res = 2;
                        break;
                    }
                }
                if(res==1){
                    maxLen=max(maxLen,j-i+1);
                }
                else{
                    break;
                }


            }
        }
        return maxLen;

    }
};