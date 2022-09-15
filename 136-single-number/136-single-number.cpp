class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int sz = nums.size();
        for(int i=0;i<sz-1; i++)
        {
            nums[i+1] ^= nums[i];
        }
        return nums[sz-1];
        
    }
};