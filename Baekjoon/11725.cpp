#include <iostream>
#include <vector>
using namespace std;
const int V = 1e5 + 3;
int answer[V];
vector<int> adj[V];

void dfs(int a, int b) {

    answer[a] = b;

    for(auto c: adj[a])
        if (c != b){
            dfs(c, a);
        }
}

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    int n;

    cin >> n;

    int t,s;

    for (int i = 1; i <= n - 1; i ++){
        cin >> t >> s;
        adj[t].push_back(s);
        adj[s].push_back(t);
    }
    
    dfs(1,-1);

    for (int j = 2 ; j <= n; j ++){

        cout << answer[j] << '\n';

    }


}