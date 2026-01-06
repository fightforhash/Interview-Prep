#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int dx[] = {2,2,2,2,1,1,-1,-1};
int dy[] = {1,-1, 1,-1, 2,-2,2,-2};

int n, m;
int r, c, s, k;
int minmv = -1;

void dfs(int x, int y, int dist, vector<vector<bool>>& visited) {
    // Update the minimum moves only when the target is reached
    if (x == s && y == k) {
        if (minmv == -1 || dist < minmv) {
            minmv = dist;
        }
    }

    // Explore all 8 possible knight moves
    for (int i = 0; i < 8; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        // Check bounds and visited status
        if (nx >= 1 && nx <= n && ny >= 1 && ny <= m && !visited[nx][ny]) {
            visited[nx][ny] = true;  // Mark the cell as visited
            dfs(nx, ny, dist + 1, visited);
            visited[nx][ny] = false; // Backtrack to allow other paths
        }
    }
}

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> m;
    cin >> r >> c >> s >> k;
    
    if (r == s && c == k) {
        cout << 0 << '\n';
        return 0;
    }

    vector<vector<bool>> visited(n + 1, vector<bool>(m + 1, false));

    visited[r][c] = true;
    dfs(r, c, 0, visited);

    cout <<  minmv << '\n';
    return 0;

}