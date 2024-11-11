#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
const int C = 103;
int n, m;
int map[C][C] = {0,};
bool visited[C][C] = {0,};
int dy[] = {0,0,1,-1};
int dx[] = {1,-1,0,0};
vector<int> v;

bool out(int x, int y){
    if (x >= 0 && x < m && y >= 0 && y < n){
        return false;
    }
    return true;
}

int dfs(int x, int y){
    if (visited[x][y]){
        return 0;
    }
    visited[x][y] = true; 
    int cnt = 0;
    cnt += 1;

    for (int i = 0; i < 4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        
        if (out(nx, ny) || map[nx][ny] == 1){
            continue;
        }
        cnt += dfs(nx, ny);
    }
    return cnt;
}

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    int k;

    cin >> n >> m >> k;
    
    for (int i = 1; i <= k; i++){
        int x1;
        int x2;
        int y1;
        int y2;

        cin >> x1 >> y1 >> x2 >> y2;

        for (int j = x1; j < x2; j++){
            for (int k = y1; k < y2; k++){
                map[j][k] = 1;
            }
        } 
    }

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if (!visited[i][j] && map[i][j] == 0){
                v.push_back(dfs(i,j));
            }
        }
    }

    sort(v.begin(), v.end());

    cout << v.size() << '\n';

    for (int c : v){
        cout << c << ' ';
    }
}