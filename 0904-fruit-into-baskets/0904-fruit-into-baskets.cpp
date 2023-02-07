class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();
        int maxWin = 0;
        unordered_map<int, int> mp;
        int j =0;
        int currWin = 0;
        
        for(int i=0; i<n; i++){
            mp[fruits[i]]+=1;
            currWin +=1;
            
            while(j<=i && mp.size()>2){
                mp[fruits[j]] -=1;
                if(mp[fruits[j]]==0) mp.erase(fruits[j]);
                
                j+=1;
                currWin -= 1;
            }
            maxWin = max(maxWin,currWin);
        }
        return maxWin;
        
    }
};