class Solution {
    void bfs(vector<int> graph[], int i, vector<bool> &vis){
        queue<int> q;
        vis[i]=true;
        q.push(i);
        while(!q.empty()){
            int n = q.front();
            q.pop();
            for(int &j:graph[n]){
                if(vis[j]==false){
                    vis[j]=true;
                    q.push(j);
                }
            }
            
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        if(n==1) return 1;
        vector<bool> vis(n+10,false);
        vector<int> graph[n+1];
        int count = 0;
        // for(int i=0; i<n ; i++){
        //     vis[i]= false;
        // }
        for(int i=0; i<n; i++){
            for(int j=0; j<isConnected[i].size(); j++){
                if(isConnected[i][j]==1 && i!=j) graph[i+1].push_back(j+1);
            }
        }
        for(int i=1; i<=n; i++){
            if(vis[i]==false){
                count++;
                bfs(graph,i,vis);
            }
        }
        return count;
        
        
        
    }
};