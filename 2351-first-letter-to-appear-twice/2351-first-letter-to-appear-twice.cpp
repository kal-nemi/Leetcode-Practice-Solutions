class Solution {
public:
    char repeatedCharacter(string s) {
        const int ch = 256;
        bool freq[ch] = {};
        for(int i =0 ; i<s.length() ; i++)
        {
            // freq[s[i]-'a']++;
            if(freq[s[i]-'a']==true) return s[i];
            freq[s[i]-'a'] = true;
        }
        
        // return '';
        return s[0];
        
        
        
    }
};