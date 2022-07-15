class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> res;
        priority_queue<pair<int,int>> pq;
        for(int i= 0; i<k; i++)
        {
            pq.push({abs(arr[i]-x),i});
        }
        int n = arr.size();
        for(int i= k; i<n ; i++)
        {
            int diff = abs(arr[i]-x);
            if(pq.top().first > diff)
            {
                pq.pop();
                pq.push({diff,i});
            }
        }
        for(int i = 0; i<k ; i++)
        {
            auto j= pq.top();
            res.push_back(arr[j.second]);
            pq.pop();
        }
        sort(res.begin(),res.end());
        return res;
        
    }
};