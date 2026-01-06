#include <iostream>
#include <vector>

using namespace std;
int n, m;
vector<vector<int>> graph;
vector<bool> visited;

int dfs(int node){
    if (visited[node]) return 0;
    visited[node] = true;
    int cnt = 1; 
    for (int neigh : graph[node]){
        cnt += dfs(neigh);
    }
    return cnt;
}


int main(){
    cin.tie(0) -> sync_with_stdio(0);
    
    cin >> n >> m;

    graph.resize(n + 1);
    visited.resize(n + 1, 0);

    for (int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    cout << dfs(1) - 1 << '\n';
    return 0;
}