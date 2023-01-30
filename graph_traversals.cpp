#include <bits/stdc++.h>

using namespace std;

void DFSRec(vector<int> adj[], int s, bool visited[]){
    visited[s] = true;
    cout<<s<<" ";
    for(int i: adj[s]){
        if(visited[i] == false){
           DFSRec(adj, i, visited);
        }
    }
}

void DFS(vector<int> adj[], int v, int s){
    bool visited[v];
    for(int i=0; i<v; i++){
        visited[i] = false;
    }
    
    DFSRec(adj, s, visited);
}

void BFS(vector<int> adj[], int v, int s){
    bool visited[v+1];
    for(int i=0; i<v; i++){
        visited[i] = false;
    }
    
    queue<int> q;
    visited[s] = true;
    q.push(s);
    
    while(!q.empty()){
        int u = q.front();
        q.pop();
        cout<<u<<" ";
        
        for(int i: adj[u]){
            if(visited[i] == false){
                visited[i] = true;
                q.push(i);
            }
        }
    }
}

void addEdge(vector<int> adj[], int u, int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main()
{
       
      int v = 6;
      vector < int >adj[v];
      addEdge (adj, 0, 1);
      addEdge (adj, 0, 2);
      addEdge (adj, 0, 5);
      addEdge (adj, 2, 4);
      addEdge (adj, 1, 3);
      addEdge (adj, 3, 5);
      addEdge (adj, 4, 5);
    
      cout<<"DFS traversal is: ";
      DFS(adj, 7, 0);

      return 0;
}