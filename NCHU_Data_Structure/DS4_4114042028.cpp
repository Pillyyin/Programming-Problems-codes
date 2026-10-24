//  4. Minimum Pushes to the Target
#include <bits/stdc++.h>
using namespace std ;
    // BFS from given source s
void bfs(vector<vector<int>>& adj, int s, vector<bool>& visited, vector<int> &res){
    //  Create a queue for BFS
    queue<int> q ;
    //  Mark source node as visited and enqueue it
    visited[s] = true ;
    q.push(s) ;

    // Iterate over the queue
    while(!q.empty()){
        //  Dequeue a vertex and store it
        in curr = q.front() ;
        q.pop() ;
        res.push_back(curr) ;
    }

    //  Get all adjacent vertices of the dequeued
    //  vertex curr If an adjacent has not been
    //  visited, mark it visited and enqueue it
    for(int x : adj[curr]){
        if(!visited[x]){
            cisited[x] = true ;
            q.push(x) ;
        }
    }

}

int main(){
    int T, m, n ;
    cin >> T ;
    while(T){
        cin >> m >> n ;
        cin >> 
    }
    
}