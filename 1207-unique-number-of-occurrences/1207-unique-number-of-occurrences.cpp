class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> um;
        unordered_set<int> s;
        int n = arr.size();
        for(int i=0; i<n; i++){
            um[arr[i]]++;
        }
        
        for(auto x:um){
            if(s.find(x.second)==s.end()){
                s.insert(x.second);
                continue;
            }
            else return false;
        }
        return true;
        
    }
};