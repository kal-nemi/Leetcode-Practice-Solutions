class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> preSum;
        int sum=0;
        for(int i=0; i<nums.size(); i++)
        {
            sum = sum+nums[i];
            preSum.push_back(sum);
        }
        return preSum;
        
    }
};