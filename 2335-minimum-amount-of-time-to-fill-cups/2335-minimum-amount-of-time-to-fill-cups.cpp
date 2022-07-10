class Solution {
public:
    int fillCups(vector<int>& amount) {
        // int ans = 0;
        sort(amount.begin(),amount.end()); 
        int c=amount[0];
        int w=amount[1];
        int h=amount[2];
        int sum=c+w+h;
        if(c+w>h) return sum/2+sum%2;
        if(c==0 && w==0) return h;
        else return h;
        
    }
};