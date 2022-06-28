class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans = 0;
        unordered_set<int> h;
        for(auto &i:nums)
        {
            h.insert(i);
        }
        int n = nums.size();
        for(int i=0 ; i<n ; i++)
        {
            if(h.find(nums[i]-1)==h.end())
            {
                int curr = 1;
                while(h.find(nums[i]+curr)!=h.end())
                {
                    curr++;
                }
                ans = max(curr,ans);
            }
        }
        return ans;
        
    }
};