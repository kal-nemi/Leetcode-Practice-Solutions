class Solution {
public:
    int minPartitions(string n) {
        int res= INT_MIN;
        for(int i=0; i<n.length() ; i++)
        {
            int a = n[i]-'0';
            if(a> res) 
            {
                // n[i] = n[i] - 3;
                res = a;
                   
            }
        }
        return res;
        
      
        
    }
};