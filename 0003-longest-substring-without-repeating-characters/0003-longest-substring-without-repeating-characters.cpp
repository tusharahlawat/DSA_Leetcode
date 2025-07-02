class Solution {
public:
    int lengthOfLongestSubstring(string s) {
int n = s.size();
        int maxLen = 0;

        for(int i = 0; i < n; i++) {
            for(int j = i; j < n; j++) {
                bool unique = true;
                // check substring s[i..j] for repeats
                for(int k = i; k < j; k++) {
                    if(s[k] == s[j]) {
                        unique = false;
                        break;
                    }
                }
                if(unique) {
                    maxLen = max(maxLen, j - i + 1);
                } else {
                    break;  // no need to expand this substring further
                }
            }
        }
        return maxLen;
    }
};