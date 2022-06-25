class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> mp;
        mp[0] = -1;
        int n = nums.size();
        for(int i=0 ; i<n ; i++)
        {
            nums[i] == 0 ? nums[i] = -1:nums[i] = 1;
        }
        int preSum = 0;
        int lmax = 0;
        
        for(int i=0 ; i<n; i++)
        {
            preSum += nums[i];
            
            
            if(mp.find(preSum)!=mp.end())
            {
                lmax = max(lmax, i-mp[preSum]);
            }
            else
            {
                mp[preSum] = i;
            }
        }
        return lmax;
        
    }
};