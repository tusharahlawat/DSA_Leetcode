class Solution {
public:
    bool isPalindrome(int x) {
        string y=to_string(x);
        if(x<0){
            return false;
        }
        else{

        for(int i = 0;i<(y.length()/2)+1;i++){
                if(y[i]!=y[y.length()-1-i]){
                    return false;
                }
            }}
        return true;
    }
};