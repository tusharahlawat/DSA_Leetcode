class Solution {
public:
    string reverseString(string s) {
        int left=0;
        int right=s.size()-1;

        while(left<right){
            swap(s[left],s[right]);
            left++;
            right--;
        }
        return s;

    }
    bool isPalindrome(string s) {
        string str;
        for(int i = 0;i<s.size();i++){
            if (isalnum(s[i])){
                str+=tolower(s[i]);

            }
            
        }
        return(str==reverseString(str));
    }
    
};