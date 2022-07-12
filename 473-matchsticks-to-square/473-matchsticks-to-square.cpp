class Solution {
public:
    bool dfs(vector<int> &sidesLength, const vector<int>& matchsticks, int index, int target)
    {
        if(index == matchsticks.size()) 
            return sidesLength[0] == sidesLength[1] && sidesLength[1] == sidesLength[2] && sidesLength[2]== sidesLength[3];
        for(int i= 0; i<4 ; i++)
        {
            if(sidesLength[i]+matchsticks[index] >target)
                continue;
            
            int j = i;
            while(--j>=0)
            {
                if(sidesLength[i]==sidesLength[j])
                    break;
            }
            if(j != -1) continue;
            sidesLength[i] += matchsticks[index];
            if(dfs(sidesLength,matchsticks,index+1 ,target))
                return true;
            sidesLength[i] -= matchsticks[index];
            
        }
        return false;
    }
    
    
    bool makesquare(vector<int>& matchsticks) {
        int n = matchsticks.size();
        if(n<4) return false;
        int sum = 0;
        for(const int val:matchsticks)
        {
            sum += val;
        }
        if(sum%4 != 0) return false;
        sort(matchsticks.begin(),matchsticks.end(),greater<int>());
        vector<int> sidesLength(4,0);
        return dfs(sidesLength, matchsticks, 0, sum/4);
        
    }
};