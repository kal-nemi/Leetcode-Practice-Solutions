class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        int n = numsDivide[0];
        for(int i:numsDivide)
        {
            n = gcd(n,i);
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size() ; i++)
        {
            if(n % nums[i] == 0) return i;
        }
        return -1;
        
        
        
    }
};