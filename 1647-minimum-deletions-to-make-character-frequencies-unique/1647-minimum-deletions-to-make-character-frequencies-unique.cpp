class Solution {
public:
    int minDeletions(string s) {
        int ans=0;
        int n = s.size();
        unordered_map<char,int> c;
        for(auto &i:s)
        {
            c[i]++;
        }
        
        unordered_set<int> seen;
        for(auto [k,v] : c)
        {
            while(seen.find(v)!= seen.end())
            {
                v--;
                ans++;
            }
            if(v>0) seen.insert(v);
        }
        
        return ans;
        
    }
};