class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        // if(n<2)return nums[0];
        int low = 0,high = n-1;
        while(low<=high){
            if(nums[low]<=nums[high]) return nums[low];
            int mid = low + (high -low)/2;
            int prev = (mid+n-1)%n;
            int next = (mid+1)%n;
            if(nums[mid]<=nums[next] && nums[mid]<=nums[prev]){
                return nums[mid];
            }
            else if(nums[low]<=nums[mid]) low = mid+1;
            else if(nums[mid]<= nums[high]) high = mid-1;
            // else return nums[0];
        }
        return -1;
        
    }
};