class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        for(int a:arr){
            if(a<=k){
                k++;
            }
        }
        return k;
        
    }
};