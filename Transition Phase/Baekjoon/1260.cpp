#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<vector<int> > graph;
vector<bool> visited;

void dfs(int start, vector<int>& result) {
    visited[start] = true;
    result.push_back(start);

    for (int next : graph[start]) {
        if (!visited[next]) {
            dfs(next, result);
        }
    }
}
void bfs(int start, vector<int>& result) {
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        result.push_back(node);

        for (int next : graph[node]) {
            if (!visited[next]) {
                visited[next] = true;
                q.push(next);
            }
        }
    }
}

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    int n, m, start;
    cin >> n >> m >> start;

    graph.resize(n + 1);
    visited.resize(n + 1, false);

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u); 
    }

    for (int i = 1; i <= n; i++) {
        sort(graph[i].begin(), graph[i].end());
    }
    
    vector<int> dfs_result, bfs_result;
    dfs(start, dfs_result);
    fill(visited.begin(), visited.end(), false); 
    bfs(start, bfs_result);

    for (int node : dfs_result) {
        cout << node << " ";
    }
    cout << endl;

    for (int node : bfs_result) {
        cout << node << " ";
    }
    cout << endl;

    return 0;
}