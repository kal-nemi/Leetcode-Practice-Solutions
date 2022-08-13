class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        unordered_map<string,int> count;
        
        for(string w : words)
        {
            count[w]++;
        }
        int n = s.length();
        int num = words.size();
        int len = words[0].length();
        
        vector<int> idx;
        
        for(int i=0; i<n-num*len+1 ; i++)
        {
            unordered_map<string,int> seen;
            int j=0;
            for(;j<num; j++)
            {
                string word = s.substr(i + j*len,len);

                if(count.find(word)!= count.end())
                {
                    seen[word]++;
                    if(seen[word]>count[word])
                    {
                        break;
                    }
                }
                else break;

            }
            if(j==num) idx.push_back(i);
        }
        
        return idx;
    }
};