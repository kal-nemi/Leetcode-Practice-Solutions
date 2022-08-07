class Solution {
public:
    void addEdge(vector<int> adj[], int u, int v)
    {
        adj[u].push_back(v);
        adj[v].push_back(u); 
    }
    
    
    int BFS(vector<int> adj[],int s, vector<int> &vis,set<int> st)
    {   
        int count=0;
        queue<int> q;
        vis[0] = 1;
        q.push(s);
        while(!q.empty())
        {
            int u = q.front();
            q.pop();
            count++;
            for(auto v:adj[u])
            {
                // cout<<vis[v]<<endl;
                if(vis[v]==0 and st.count(v)==0)
                {
                    vis[v]=1;
                    q.push(v);
                }
            }
        }
        return count;
        
            
    }
    
    int reachableNodes(int n, vector<vector<int>>& edges, vector<int>& restricted) {
        vector<int> adj[n+1];
        for(auto u:edges)
        {
            addEdge(adj,u[0],u[1]);
        }
        vector<int> vis(n,0);
        set<int> st ;
        for(int i:restricted)
        {
            st.insert(i);
        }
        return BFS(adj,0,vis,st);
        
        
        
    }
};