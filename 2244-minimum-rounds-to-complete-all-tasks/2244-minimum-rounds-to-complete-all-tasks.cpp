class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int> mp;
        for(auto &i:tasks)
            mp[i]++;
        
        int n = tasks.size();
        
        int rounds =0;
        
        for(auto it:mp)
        {
            if(it.second==1) return -1;
            rounds += it.second/3;
            if(it.second %3!=0) rounds++;
            
        }
        return rounds;
        
        
        
    }
};