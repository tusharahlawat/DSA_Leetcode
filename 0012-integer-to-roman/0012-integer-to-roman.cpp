class Solution {
public:
    string intToRoman(int num) {
        const vector<pair<int,string>> mapped={
            {1000,"M"},{900,"CM"},{500,"D"},{400,"CD"},{100,"C"},{90,"XC"},{50,"L"},{40,"XL"},{10,"X"},{9,"IX"},{5,"V"},{4,"IV"},{1,"I"}
        };
        string res="";
    for(auto&[value,symbol]:mapped){
        if(num==0){
            break;
        }
        else{
            int count=num/value;
            for(int i=0;i<count;i++){
                res+=symbol;
            }
            num-=count*value;
        }
    }
        return res;
    }
};