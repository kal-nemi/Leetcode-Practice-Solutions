class Solution {
public:
    int myAtoi(string s) {
        int sign = 1;
        long res = 0;
        int i = 0;
        while(i<s.length() && s[i]==' ')
        { i++;}
        
        
        if(s[i]=='-' || s[i]=='+') 
        {
            sign = s[i]=='-'? -1:1;
            i++;
            
        }   
        

        while(s[i] >='0' && s[i] <='9') 
        {
            res = res*10 + s[i]-'0';
            if(sign ==-1 && -1*res<INT_MIN) return INT_MIN;
            if(sign ==1 && res>INT_MAX) return INT_MAX;
            
            i++;
        }
        return res*sign;

        
        
    }
};