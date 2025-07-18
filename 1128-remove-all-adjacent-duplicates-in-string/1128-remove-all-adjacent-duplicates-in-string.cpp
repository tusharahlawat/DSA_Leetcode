class Solution {
public:
    string removeDuplicates(string s) {
        int n = s.length();
        string im="";
        int i=0;
        while(i<n){
            if(!im.empty() && im.back()==s[i]){
                im.pop_back();
            }
            else{
                im.push_back(s[i]);
            }
            i++;
        }
        return im;
    }
};