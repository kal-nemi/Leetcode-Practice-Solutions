class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> mp1(26),mp2(26);
        
        for(auto &c:ransomNote)
        {
            mp1[c-'a']++;
        }
        for(auto &c:magazine)
        {
            mp2[c-'a']++;
        }
        
        for(int i=0; i<26 ; i++)
        {
            if(mp1[i]>mp2[i])
                return false;
        }
        return true;
    }
};