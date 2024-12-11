#include <iostream>
using namespace std;

bool table[9];
int n, m;

void bt(int a, int b) {
    if (a == n + 1 && b != m) {
        return;
    }
    if (b == m) {
        for (int c = 1; c <= n; ++c) {
            if (table[c]) cout << c << ' ';
        }
        cout << '\n';
        return;
    }
    table[a] = true;
    bt(a + 1, b + 1);
    table[a] = false;
    bt(a + 1, b);
}

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> m;
    bt(1, 0);
}