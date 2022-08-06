class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        
        int per = minutesToTest/minutesToDie;
        
        return ceil(log(buckets) / log(per+1));
        
        
    }
};