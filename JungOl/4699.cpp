#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> seqs(n);

    for (int i = 0; i < n; i++) {
        int len;
        cin >> len;
        seqs[i].resize(len);
        for (int j = 0; j < len; j++) {
            cin >> seqs[i][j];
        }
    }

    // Input reorder indices
    vector<int> order(n);
    for (int i = 0; i < n; i++) {
        cin >> order[i];
    }

    // Output reordered sequences
    for (int i : order) {
        for (int x : seqs[i]) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}