class Solution {
public:
    
    bool isConcat(string word, unordered_set<string> &st){
        int n = word.length();
        for(int i =0; i<n ; i++){
            string prefix = word.substr(0,i+1);
            string suffix = word.substr(i+1);
            if(st.find(prefix)!=st.end() && st.find(suffix)!=st.end() || st.find(prefix)!= st.end() && isConcat(suffix,st) ){
                return true;
            }
        }
        return false;
        
    }
    

    
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        int n = words.size();
        unordered_set<string> st(begin(words),end(words));
        vector<string> res;
        
        for(int i=0; i<n; i++){
            string word = words[i];
            if(isConcat(word,st)){
                res.push_back(word);
            }
        }
        return res;
        
    }
};