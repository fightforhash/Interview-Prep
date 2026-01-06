#include <iostream>
using namespace std;

int K, direction[6], length[6];

int main() {
    cin >> K;
    for (int i = 0; i < 6; ++i) cin >> direction[i] >> length[i];

    int maxW = 0, maxH = 0, idxW = 0, idxH = 0;
    for (int i = 0; i < 6; ++i) {
        if ((direction[i] == 1 || direction[i] == 2) && length[i] > maxW) {
            maxW = length[i], idxW = i;
        }
        if ((direction[i] == 3 || direction[i] == 4) && length[i] > maxH) {
            maxH = length[i], idxH = i;
        }
    }

    int innerW = length[(idxW + 3) % 6];
    int innerH = length[(idxH + 3) % 6];
    cout << (maxW * maxH - innerW * innerH) * K << '\n';
    return 0;
}