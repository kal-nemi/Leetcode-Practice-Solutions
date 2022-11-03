class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        int count = 0;
        unordered_map<string,int> um;
        for(auto w:words){
            um[w]++;
        }
        
        bool flag = false;
        
        for(auto x:words){
            string w = x;
            reverse(w.begin(),w.end());
            if(w!=x and um[x]>0 and um[w]>0){
                um[x]--;
                um[w]--;
                count+=4;
            }
            else if(w==x and um[x]>1){
                um[x]-=2;
                count+=4;
            }
            else if(w==x and !flag and um[x]>0){
                um[x]--;
                count+=2;
                flag = true;
            }
        }  
        return count;
    }
};