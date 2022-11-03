class Solution {
public:
    int longestPalindrome(string s) {
        int count= 0;
        unordered_map<char,int> um;
        for(auto &i:s){
            um[i]++;
        }
        int n = s.length();
        for(auto &i:um){
            if(i.second%2!=0){
                count++;
            }
        }
        if(count>1) return n-count+1;
        return n;
        
    }
};