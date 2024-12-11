#include <iostream>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;
int n;
int ans = INT_MAX;
int adj[14][14];
bool visited[14];
void bt(int depth, int v, int cost){
    if (depth >= n){
        if (adj[v][1] && ans > cost + adj[v][1])
            ans = cost + adj[v][1];
        return;
    }
    for (int i = 2; i <= n; i++){

        if (!visited[i] && adj[v][i] && cost + adj[v][i] < ans){
            visited[i] = true;
            bt(depth + 1, i, cost + adj[v][i]);
            visited[i] = false;
        }
    }
}


int main(){
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
          cin >> adj[i][j];
    }
    }

    visited[1] = true;
    bt(1,1,0);
    cout << ans;

}