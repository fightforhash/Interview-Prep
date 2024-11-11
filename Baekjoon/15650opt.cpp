#include <bits/stdc++.h>
using namespace std;
bool table[9];
int n, m;

void bt(int k, int c) {
    if (k == n+1 && c != m) return;
    if (c == m) {
        for (int i = 1; i <= n; ++i) if (table[i]) cout << i << ' ';
        cout << '\n';
        return;
    }
    table[k] = true;
    bt(k+1, c+1);
    table[k] = false;
    bt(k+1, c);
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cin >> n >> m;
    bt(1, 0);
}