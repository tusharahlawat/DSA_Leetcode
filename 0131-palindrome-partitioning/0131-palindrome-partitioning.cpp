class Solution {
public:
    void func(string &s, vector<string> &v, vector<vector<string>> &ans) {
        // Base case: if the string is empty, add the current partition to the result
        if (s.empty()) {
            ans.push_back(v);
            return;
        }

        // Try all possible substrings
        for (int len = 1; len <= s.size(); len++) {
            string x = s.substr(0, len); // Take the substring of length `len`
            if (ispalindrome(x)) { // Check if it's a palindrome
                v.push_back(x); // Choose
                string y = s.substr(len); // Remaining substring
                func(y, v, ans); // Explore
                v.pop_back(); // Backtrack
            }
        }
    }

    bool ispalindrome(string &x) {
        int left = 0, right = x.size() - 1;
        while (left < right) {
            if (x[left] != x[right]) return false;
            left++;
            right--;
        }
        return true;
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans; // To store all partitions
        vector<string> v; // To store the current partition
        func(s, v, ans);
        return ans;
    }
};