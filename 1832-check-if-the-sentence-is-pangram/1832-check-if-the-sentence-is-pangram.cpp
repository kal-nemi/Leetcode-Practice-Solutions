class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<int> seen(26,0) ;
        for(auto &i:sentence)
        {
            seen[i-'a']++;
        }
        int count = 0;
        for(auto &i:seen)
        {
            if(i>=1) count+=1;
        }
        if(count>=26) return true;
        return false;
        
    }
};