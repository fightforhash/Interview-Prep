#include <iostream>
using namespace std;

int a[11];
bool check[11];
int n;
int m;

//Backtracking, Recursion, DFS

void dfs(int d){
    
    if (d == m){
        for (int i = 0; i < m; i++){
            cout << a[i] << " ";
        }
        cout << "\n";
        return;
    }
    
    for (int i = 1; i <= n; i++){

        if(!check[i]){ //true false allocation 다지우면 SIGBUS
            check[i] = true;
            a[d] = i;
            dfs(d + 1);
            check[i] = false;
        }
    }
}

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> m;

    dfs(0);
    
}