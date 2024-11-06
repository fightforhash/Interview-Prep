#include <iostream>
#include <vector>
using namespace std;

const int N = 103;
int n, A[N];

bool visited[N];
bool valid(int st, int cur) {
    if (visited[cur]) return st == cur;
    visited[cur] = true;
    return valid(st, A[cur]);
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> A[i];
    }
    vector<int> choosed;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) visited[j] = false;
        if (valid(i, i)) choosed.push_back(i);
    }
    cout << size(choosed) << '\n';
    for (int e : choosed) {
        cout << e << '\n';
    }
}