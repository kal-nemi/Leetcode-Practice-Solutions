class Solution {
public:
    int countAsterisks(string s) {
        int count = 0;
        int pipes = 0;
        for(char &i:s)
        {
            if(i=='|')
                pipes++;
                
            if(pipes%2==0 && i=='*') count++;
            
        }
            
                
            
        return count;
        
    }
};