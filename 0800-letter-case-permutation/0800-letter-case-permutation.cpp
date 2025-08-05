class Solution {
public:
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        ans.push_back(""); // Initialize with empty string to start

        int n = s.length();
        for (int i = 0; i < n; i++) {
            if (s[i] >= '0' && s[i] <= '9') {
                // For digits, append the digit to all existing strings in ans
                for (int j = 0; j < (int)ans.size(); j++) {
                    ans[j] = ans[j] + s[i];
                }
            }
            else {
                // For letters, create new strings by appending uppercase & lowercase versions
                vector<string> out;
                for (int j = 0; j < (int)ans.size(); j++) {
                    string temp = ans[j];
                    // Append uppercase letter version
                    out.push_back(temp + (char)toupper(s[i]));
                    // Append lowercase letter version
                    out.push_back(temp + (char)tolower(s[i]));
                }
                ans = out; // update ans with new permutations
            }
        }

        return ans;
    }
};
