class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string w1 = "", w2 = "";
        for(auto &i:word1){
            w1+=i;
        }
        for(auto &i:word2){
            w2+=i;
        }
        // cout<<w1<<" "<<w2;
        for(int i=0; i<w1.length(); i++)
        {
            if(w1[i]!=w2[i]) return false;
            
        }
        for(int i=0; i<w2.length(); i++)
        {
            if(w1[i]!=w2[i]) return false;
            
        }
        return true;
        
        
    }
};