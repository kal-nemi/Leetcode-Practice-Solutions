class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long cnt = 0;
        int n = nums.size();
        int leftBound = -1;
        int lastmin = -1, lastmax = -1;
        
        for(int i=0; i<n ; i++){
            if(nums[i]>= minK && nums[i]<=maxK){
                
                lastmin = (nums[i] == minK)? i: lastmin;    
                
                lastmax = (nums[i]== maxK)? i: lastmax;
                
                cnt += max(0, min(lastmin,lastmax) - leftBound);
            }
            else {
                leftBound = i;
                
                lastmin = lastmax = -1;
            }
        }
        return cnt;
        
        
    }
};