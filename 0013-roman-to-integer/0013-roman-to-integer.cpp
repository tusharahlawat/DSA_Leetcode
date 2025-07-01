class Solution {
public:
    int romanToInt(string s) {
        const vector<pair<int,string>> mapped={
            {1000,"M"},{900,"CM"},{500,"D"},{400,"CD"},{100,"C"},{90,"XC"},{50,"L"},{40,"XL"},{10,"X"},{9,"IX"},{5,"V"},{4,"IV"},{1,"I"}
        };
        int sum=0;
        int i=0;
        while(i<s.length()){
        for(auto&[value,roman]:mapped){
            if(s.substr(i,roman.length())==roman){
                sum+=value;
                i+=roman.length();
            }
        }
        }
        return sum;
    }
};