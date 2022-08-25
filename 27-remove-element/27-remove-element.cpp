class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int left = 0,right = 0;
        int ans = 0;
        int n = nums.size();
        while(left<n && right<n)
        {
            if(nums[right]!=val)
            {
                swap(nums[left],nums[right]);
                // nums[left]=NULL;
                ans++;
                left++;
                right++;
            }
            else
                right++;
        }
        return ans;
        
    }
};