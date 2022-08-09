class Solution {
public:
    void addEdge(vector<int> adj[],int &u, int &v)
    {
        adj[u].push_back(v);
    }
    
    vector<int> topoSort(int V,vector<int> adj[])
    {
        vector<int> ans;
        vector<int> inDegree(V,0);
        
        for(int u=0; u<V; u++)
        {
            for(int x:adj[u])
            {
                inDegree[x]++;
            }
        }
        
        queue<int> q;
        
        for(int i=0;i<V; i++)
        {
            if(inDegree[i]==0)
            {
                q.push(i);
            }
        }
        while(!q.empty())
        {
            int u = q.front();
            q.pop();
            ans.push_back(u);
            for(int v:adj[u])
            {
                if(--inDegree[v]==0)
                {
                    q.push(v);
                }
            }
        }
        
        if(ans.size()==V)
            return ans;
        else
            return vector<int>();
    }
    
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        
        vector<int> adj[numCourses];
        for(auto i:prerequisites)
        {
            addEdge(adj,i[1],i[0]);
        }
        
        return topoSort(numCourses,adj);
        
    }
};