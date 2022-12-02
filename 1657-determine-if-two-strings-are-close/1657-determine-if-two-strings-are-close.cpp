class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int m = word1.length();
        int n = word2.length();
        if(m!=n)return false;
        set<char> s1,s2;
        vector<int> um1(26,0),um2(26,0);
        for(int i=0; i<word1.size(); i++){
            s1.insert(word1[i]);
            s2.insert(word2[i]);
            
            um1[word1[i]-'a']++;
            um2[word2[i]-'a']++;
            
        }
        sort(um1.begin(),um1.end());
        sort(um2.begin(),um2.end());
        
        if(s1==s2 && um1==um2) return true;
        else return false;
                
        
    }
};