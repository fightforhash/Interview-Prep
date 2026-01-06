#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
const int m = 25;
int n;
int map[m][m] = {0,};
bool visited[m][m] = {0,};
int dy[] = {0,0,1,-1};
int dx[] = {1,-1,0,0};
int label = 1;
vector<int> v;
int house = 0;

void bt(int y, int x){
    visited[y][x] = true;
    map[y][x] = label;
    house++;

    for (int i = 0; i < 4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx < 0 || ny < 0 || nx >= n || ny >= n)
            continue;

        if(map[ny][nx] == 1 && visited[ny][nx] == 0){
            bt(ny, nx);
        }

    }

}


int main(){

    cin >> n;

    for (int i = 0; i < n; i++){
        string input;
        cin >> input;

    for (int j = 0; j < n; j++){
        map[i][j] = input.at(j) - '0';
        }
}

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (map[i][j] == 1 && visited[i][j] == 0) {
                bt(i, j);
                label++;
                v.push_back(house);
                house = 0;
            }
        }
    }
    
    sort(v.begin(), v.end());
 
    cout << label-1 << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }
}