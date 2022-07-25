class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> ans;
        
        int f_occ = lower_bound(nums.begin(),nums.end(),target) - nums.begin();
        
        int l_occ = upper_bound(nums.begin(),nums.end(),target) - nums.begin();
        
        l_occ--;
        
        if(f_occ != nums.size() && nums[f_occ] == target) 
        {
            ans.emplace_back(f_occ);
        }
        else ans.emplace_back(-1);
        
        
        if(l_occ >=0 && nums[l_occ] == target )
        {
            ans.emplace_back(l_occ);
        }
        else ans.emplace_back(-1);
        
        return ans;
        
        //https://www.youtube.com/watch?v=edJ19qIL8WQ
        
        
        
        
        
    }
};