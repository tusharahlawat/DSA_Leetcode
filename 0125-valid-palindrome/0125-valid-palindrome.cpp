class Solution {
public:
    bool isPalindrome(string s) {
        string ss;
        string z;
        for(int i = 0;i<s.length();i++){
            if('a'<=s[i]&&s[i]<='z'||'A'<=s[i]&&s[i]<='Z'||'0'<=s[i]&&s[i]<='9'){
                ss+=tolower(s[i]);
            }

        }
        z=ss;
        reverse(ss.begin(),ss.end());
        return ss==z;
        
    }
};