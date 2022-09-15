class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int sz = strs.size();
        string ans = "";
        sort(strs.begin(),strs.end());
        string a = strs[0];
        string b = strs[sz-1];
        for(int i=0; i<a.size(); i++)
        {
            if(a[i]==b[i])
                ans +=a[i];
            else break;
        }
        return ans;       
        
        
    }
};