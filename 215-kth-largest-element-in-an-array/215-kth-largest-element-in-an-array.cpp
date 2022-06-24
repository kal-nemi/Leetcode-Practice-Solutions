class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end()); //o(nlogn)
        // while(--k)
        // {         
        //     nums.pop_back();
        // }
        return nums[nums.size()-k];
        
    }
};