class Solution {
public:
    int secondsToRemoveOccurrences(string s) {
        int seconds =0;
        int c1 = true;
        while(c1)
        {
            c1=false;
            for(int i=0; i<s.size()-1; i++)
            {
                if(s[i]=='0' && s[i+1]=='1')
                {
                    swap(s[i],s[i+1]);
                    i++;
                    c1=true;
                }
            }
            seconds +=c1;
        }
        return seconds;
        
        
        
    }
};