class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        long long sum = 0;
        int n = nums.size();
        
        for(int i=0; i<n; i++){
            sum+=nums[i];
        }
        
        int idx = n-1;
        long long mid_diff = sum/n;
        
        long long sum2 = 0;
        for(int i = n-1; i>0; --i){
            sum2+= nums[i]; 
            long long sum1 = sum - sum2;
            long long diff = abs( (sum1/i) - (sum2/(n-i)) );
            if(diff <= mid_diff){
                idx = i-1;
                mid_diff = diff;
            }
        }
        return idx;
        
        
    }
};