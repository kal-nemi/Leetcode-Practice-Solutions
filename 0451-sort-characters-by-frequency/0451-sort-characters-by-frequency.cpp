class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>um;
        for(int i=0; i<s.length(); i++)
        {
            um[s[i]]++;
        }
        priority_queue<pair<int,char>> pq;
        for(auto i:um){
            pq.push({i.second,i.first});
        }
        string ans="";
        while(!pq.empty()){
            ans += string(pq.top().first,pq.top().second);
            pq.pop();
        }
        return ans;
    }
};