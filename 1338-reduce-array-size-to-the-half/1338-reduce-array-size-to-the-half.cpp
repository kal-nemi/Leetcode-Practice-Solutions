class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n = arr.size();
        
        unordered_map<int,int> mp;
        priority_queue<int> pq;
        
        for(int i:arr)
        {
            mp[i]++;
        }
        for(auto &i:mp)
            pq.push(i.second);
        
        int ans =0;
        int res = 0;
        while(res *2<n)
        {
            ans++;
            res+=pq.top();
            pq.pop();
        }
        
        return ans;
    }
};