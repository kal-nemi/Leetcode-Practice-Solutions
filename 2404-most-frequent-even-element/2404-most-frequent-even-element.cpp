class Solution {
public:        
    int mostFrequentEven(vector<int>& nums) {
        map<int,int> mp;
        for(int i:nums)
        {
            if(i%2==0)
                mp[i]++;
        }
        int res = -1;
        int maxfrq = 0;
        for(auto it:mp)
        {
            cout<<it.first;
            if(it.second > maxfrq)
            {
                res = it.first;
                maxfrq = it.second;
            }
        }
        return res;
    }
        
};