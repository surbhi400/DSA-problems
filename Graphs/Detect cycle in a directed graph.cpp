/* Given a Directed Graph with V vertices (Numbered from 0 to V-1) and E edges, check whether it contains any cycle or not.


Example 1:
4 4
0 1
1 2
2 3
3 3
Output: 1
Explanation: 3 -> 3 is a cycle

Your task:
You dont need to read input or print anything. Your task is to complete the function isCyclic() which takes the integer V denoting the number of vertices and adjacency 
list as input parameters and returns a boolean value denoting if the given directed graph contains a cycle or not.


Expected Time Complexity: O(V + E)
Expected Auxiliary Space: O(V)
*/-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
class Solution {
    private:
    bool dfsCheck(int node, vector<int> adj[],int vis[],int pathVis[]){
        vis[node]=1;
        pathVis[node]=1;
        
        //traverse for adjacent node
        
        for(auto it:adj[node]){
            //for nodes that are not visited
            if(!vis[it]){
                if(dfsCheck(it,adj,vis,pathVis)==true){
                    return true;
                }
            }
            //if nodes are visited then check if they are in the same path or not
            else if(pathVis[it]){
                return true;
            }
            
        }
        pathVis[node]=0;
        return false;
    }
    
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        int vis[V]={0};
        int pathVis[V]={0};
        
        for(int i=0; i<V; i++){
            if(!vis[i]){
                if(dfsCheck(i,adj,vis,pathVis)==true){
                    return true;
                }
            }
        }
        return false;
    }
};
