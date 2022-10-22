class Solution {
public:
    string minWindow(string s, string t) {
        string ans = "", temp = "";
        unordered_map<char,int> mp;
        for(auto &ch:t) {
            mp[ch]++;
        }
        int  i= 0, j=0, n = s.size(), mini = INT_MAX;
        int count = mp.size();
        while(i<=j && j<n){
            if(mp.count(s[j])){
                mp[s[j]]--;
                if(mp[s[j]]==0) count--;
            }
            if(count==0){
                while(i<=j && count!=1){
                    if(mp.count(s[i])){
                        mp[s[i]]++;
                        if(mp[s[i]]>0){
                            count++;
                            if(mini>j-i+1){
                                mini = j-i+1;
                                ans = s.substr(i,j-i+1);
                            }
                        }
                    }
                    i++;
                }
            }
            j++;
        }
        return ans;
        
        
    }
};