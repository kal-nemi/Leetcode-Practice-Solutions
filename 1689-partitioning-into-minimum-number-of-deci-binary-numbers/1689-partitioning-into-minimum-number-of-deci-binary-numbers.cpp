class Solution {
public:
    int minPartitions(string n) {
        int res= 0;
        for(char &i:n)
        {
            int a = i;
            if(a> res) 
            {
                // n[i] = n[i] - 3;
                res = a;       
            }
        }
        return res-'0';
    }
};