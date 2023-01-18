class Solution {
public:
    int kadane(vector<int> &arr){
        int n = arr.size();
        int res = arr[0], maxEnd = arr[0];
        for(int i=1; i<n; i++){
            maxEnd = max(arr[i],maxEnd + arr[i]);
            res = max(res,maxEnd);
        }
        return res;
    }
    
    
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int maxNormal = kadane(nums);
        if(maxNormal < 0)
            return maxNormal;
        
        int arrSum = 0;
        for(int i=0; i<n; i++){
            arrSum += nums[i];
            nums[i] = -nums[i];
        }
        
        int maxcircular = arrSum + kadane(nums);
        return max(maxNormal,maxcircular);
        
        
    }
};