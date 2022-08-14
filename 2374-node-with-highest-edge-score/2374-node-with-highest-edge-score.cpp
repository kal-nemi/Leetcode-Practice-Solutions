class Solution {
public:
    int edgeScore(vector<int>& edges) {
        int n = edges.size();
        
        vector<long long> score(n);
        
        for(int i=0; i<n; i++)
        {
            score[edges[i]] +=i;
        }
        
        long long mx = INT_MIN;
        int idx;
        
        for(int i=0; i<n; i++)
        {
            if(score[i]>mx)
            {
                mx= score[i];
                idx = i;
            }
        }
        return idx;
        
    }
};