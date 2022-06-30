class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int start = 0;
        int n = nums.size();
        int end = n-1;
        int count = 0;
        
        sort(nums.begin(),nums.end());
        
        while(start<end)
        {
            count += nums[end] - nums[start];
            
            start++;
            end--;
        }
        return count;
        
        
    }
};