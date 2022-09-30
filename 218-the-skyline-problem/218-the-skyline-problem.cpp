class Solution {
public:
    vector<vector<int>> getSkyline(vector<vector<int>>& buildings) {
        vector<vector<int>>ans;
        multiset<int> pq{0};
        
        vector<pair<int,int>> points;
        for(auto &b:buildings){
            points.push_back({b[0],-b[2]});
            points.push_back({b[1],b[2]});
        }
        
        sort(points.begin(),points.end());
        int ongoingHeight = 0;
        for(int i=0; i<points.size(); i++)
        {
            int currPoint = points[i].first;
            int heightAtCurrPoint = points[i].second;
            
            if(heightAtCurrPoint<0)
            {
                pq.insert(-heightAtCurrPoint);
            }
            else{
                pq.erase(pq.find(heightAtCurrPoint));
            }
            auto pqTop = *pq.rbegin();
            if(ongoingHeight != pqTop){

                ongoingHeight = pqTop;
                ans.push_back({currPoint,ongoingHeight});
            }
        }
        return ans;
    }
    
};