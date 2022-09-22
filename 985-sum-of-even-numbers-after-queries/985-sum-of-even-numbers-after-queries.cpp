class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        int evenSum = 0;
        
        for(int i=0; i<n; i++){
            if(nums[i]%2==0)
                evenSum += nums[i];
        }
        vector<int> arr(n,0);
        for(int i=0; i<queries.size(); i++){
            int newVal = queries[i][0];
            int idx = queries[i][1];
            
            int oldVal = nums[idx];
            if(oldVal %2 ==0) evenSum -= oldVal;
            
            nums[idx] +=newVal;
            
            if(nums[idx]%2==0) evenSum +=nums[idx];
            arr[i] = evenSum;
        }       
        return arr;
        
        
    }
};