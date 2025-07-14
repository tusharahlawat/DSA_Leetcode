class Solution {
public:
    int strStr(string haystack, string needle) {
       int x = haystack.length();
       int y = needle.length();
       if(haystack==needle){
        return 0;
       }

       for(int i=0;i<=x-y;i++){
        bool found = true;
        for(int j = 0;j<y;j++){
            if(haystack[i+j]!=needle[j]){
                found = false;
            }
        }
        if(found) return i;
       } 
       return -1;
    }
};