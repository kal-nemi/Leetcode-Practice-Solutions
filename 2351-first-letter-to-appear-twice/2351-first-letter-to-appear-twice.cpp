class Solution {
public:
    char repeatedCharacter(string s) {
        const int ch = 256;
        int freq[ch] = {0};
        for(int i =0 ; i<s.length() ; i++)
        {
            freq[s[i]-'a']++;
            if(freq[s[i]-'a']>1) return s[i];
        }
        
        // return '';
        return s[0];
        
        
        
    }
};