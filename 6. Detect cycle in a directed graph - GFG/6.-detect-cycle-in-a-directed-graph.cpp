// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool df(vector<int>adj[],int i,vector<bool> &res,vector<bool> &vis){
        res[i]=true;vis[i]=true;
        for(auto x:adj[i]){
            if(vis[x]==false && df(adj,x,res,vis)){return true;}
            else if(res[x]==true)return true;
        }
        res[i]=false;
        return false;
        
    }
    bool isCyclic(int V, vector<int> adj[]) {
        // Code here
        vector<bool>res(V,false);
        vector<bool>vis(V,false);
        for(int i=0;i<V;i++){
            if(df(adj,i,res,vis)==true)return true;
    }
    return false;
    }
};

// { Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}
  // } Driver Code Ends