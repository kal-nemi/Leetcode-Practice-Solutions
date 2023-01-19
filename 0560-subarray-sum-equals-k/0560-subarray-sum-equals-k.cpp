class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        
        unordered_map<int,int> mp;
        int cnt =0;
        int preSum = 0;
        int n = nums.size();
        mp[0]=1;
        for(int i=0; i<n; i++){
            preSum += nums[i];
            int val = preSum -k;
            if(mp.count(val))
                cnt += mp[val];
            mp[preSum]++;
        }
        return cnt;
        
    }
};