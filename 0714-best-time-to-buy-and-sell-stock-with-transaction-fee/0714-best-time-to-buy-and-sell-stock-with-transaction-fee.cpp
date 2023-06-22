class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int sno = 0 , s1 = INT_MIN;
        
        for(int p:prices){
            int tmp = sno;
            sno = max(sno, s1+p);
            s1 = max(s1, tmp-p-fee);
        }
        return sno;
        
    }
};