class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> curr(rowIndex+1,1);
        long c=1;
        
        for(int idx=1; idx<rowIndex ; idx++)
        {
            c = c * (rowIndex-idx+1) / idx;
            curr[idx] = c;
        }
        return curr;
    }
};