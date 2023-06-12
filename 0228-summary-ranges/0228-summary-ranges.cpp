class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        string ans="";
        vector<string> res;
        int n = nums.size();
        
        for(int i=0; i<n; i++){
            
            int j = i;
            
            while(j+1 <n && nums[j]+1 ==nums[j+1]){
                j++;
            }
            
            if(j>i){
                ans += to_string(nums[i]);
                ans += "->";
                ans += to_string(nums[j]);
                
            }
            
            else {
                ans += to_string(nums[i]);
            }
            res.push_back(ans);
            ans = "";
            i=j;
        }
            
        return res;
        
    }
};