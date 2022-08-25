class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        
        int left = 0,right = 0;
        while(left<n && right<n)
        {
            if(nums[right]!=0)
            {
                swap(nums[left],nums[right]);
                left++;
                right++;
            }
            else 
                right++;
        }
        
    }
};