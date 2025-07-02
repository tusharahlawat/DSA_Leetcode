class Solution {
public:
    int myAtoi(string s) {
        int n = s.length() , i = 0 ;
        long long  res = 0 ;
        bool flag = false;

        if(s[i] == ' ')
        {
            while(s[i] == ' ')
            {
                i++;
            }
        
        }
        if(s[i] == '-')
        {
            flag = true;
        }
        else if(s[i] =='+')
        {
            flag = false;
        }
        else
        {
            
            if(s[i]>='0' && s[i]<='9')
            {
                res = s[i]-'0';
            }
            else
            {
                return 0;
            }
        }
        i++;
        while( i < n )
        {
            if( res > 0 || s[i] != '0')
                break;
            
            i++;
        }
        while(i < n)
        {
            if(s[i]>='0' && s[i]<='9')
            {
                res = res*10 + (s[i]-'0');
                if(flag && -res < INT_MIN)
                    return INT_MIN;
                else if(!flag && res > INT_MAX)
                {
                    return INT_MAX;
                }
            }
            else
            {
                break;
            }
            i++;
        }
        if(flag)
            res = -res;

        return static_cast<int>(res);
    }
};