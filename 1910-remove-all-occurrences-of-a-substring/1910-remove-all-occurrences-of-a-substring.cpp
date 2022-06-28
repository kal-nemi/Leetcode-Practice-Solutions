class Solution {
public:
    string removeOccurrences(string s, string part) {
        string ans;
        
        for(auto &i:s)
        {
            ans.push_back(i);
            if(ans.size()>=part.size() && ans.substr(ans.size()-part.size())==part)
            {
                int m = part.size();
                while(m--)
                {
                    ans.pop_back();
                }
                
            }
        }
        return ans;
        
        
    }
};