class Solution {
public:
    bool canConstruct(string ransomNote,string magazine){
        for(char c:ransomNote){
            size_t pos=magazine.find(c);
            if(pos==string::npos)return false;
            magazine.erase(pos,1);
        }
        return true;
    }
};
