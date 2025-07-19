class Solution {
public:
    bool isValid(string s) {
        stack<char> strr;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '[' || s[i] == '(' || s[i] == '{') {
                strr.push(s[i]);
            }
            else {
    
                if (strr.empty()) return false;

                if ((s[i] == ']' && strr.top() != '[') ||
                    (s[i] == '}' && strr.top() != '{') ||
                    (s[i] == ')' && strr.top() != '(')) {
                    return false;
                }

                strr.pop();
            }
        }

        return strr.empty();
    }
};
