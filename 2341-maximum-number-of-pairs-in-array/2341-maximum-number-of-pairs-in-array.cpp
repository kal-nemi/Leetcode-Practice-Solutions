class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int l = 0;
        vector<int> ans;
        if(n<2) return {0,1};
        unordered_map<int,int> mp;
        for(int i = 0 ; i<n ; i++)
        {
            mp[nums[i]]++;
        }
        for(auto i:mp)
        {
            count+=i.second/2;
            l+=i.second%2;
        }
        ans.push_back(count);
        ans.push_back(l);
        return ans;
        
        
    }
};