class Solution {
public:
    int firstUniqChar(string s) {
        // unordered_map<char,int> mp;
        vector<int> vis(26,0);
        
        for(int i=0; i<s.length() ; i++)
        {
            vis[s[i]-'a']++;
        }
        for(int i=0 ; i<s.length(); i++)
        {
            if(vis[s[i]-'a']==1) return i;
        }
        return -1;
        
    }
};