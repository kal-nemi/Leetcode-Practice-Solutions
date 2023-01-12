class Solution {
public:
    vector<int> dfs(vector<vector<int>> &adjList,string &labels,vector<int> &vis,int root,vector<int> &ans){
        vector<int>temp(26);
        
        vis[root] = 1;
        
        
        for(auto node:adjList[root]){
            if(!vis[node]){
                vector<int> child = dfs(adjList,labels,vis,node,ans);
                
                temp[labels[node]-'a']++;
                
                for(int i=0; i<26; i++){
                    temp[i] += child[i];
                }
            }
        }
        
        ans[root] += temp[labels[root] - 'a'] +1;
        return temp;
        
        
        
    }
    
    
    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        vector<vector<int>> adjList(n);
        vector<int> ans(n,0);
        //make adjacency list for tree
        for(auto &edge:edges){
            adjList[edge[0]].push_back(edge[1]);
            adjList[edge[1]].push_back(edge[0]);
        }
        
        vector<int> vis(n);
        dfs(adjList,labels,vis,0,ans);
        
        return ans;
    }
};