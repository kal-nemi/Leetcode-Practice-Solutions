class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        const int ch = 256;
        int count[ch] = {0};
        for(int i=0; i<s.length(); i++)
        {
            count[s[i]]++;
            count[t[i]]--;
            
        }
        for(int i=0 ; i<ch; i++)
        {
            if(count[i]!=0) return false;
        }
        return true;
        
    }
};