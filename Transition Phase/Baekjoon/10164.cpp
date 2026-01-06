#include <iostream>
#include <vector>
using namespace std;

int dp[16][16];
int ready[16][16];

int count_paths(int y, int x) {
    if (y == 1 && x == 1) return 1;
    if (y < 1 || x < 1) return 0;
    if(ready[y][x]) return dp[y][x];
    dp[y][x] = true; 

    return dp[y][x] = count_paths(y - 1, x) + count_paths(y, x - 1);
}

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    int N, M, K;
    cin >> N >> M >> K;

    if (K == 0) {
        cout << count_paths(N, M) << endl;
        return 0;
    }

    // ○ 표시된 칸의 좌표 
    int ky = (K - 1) / M + 1;
    int kx = (K - 1) % M + 1;

    // (0,0) → (ky, kx) 까지의 경로 수 × (ky, kx) → (N-1, M-1) 까지의 경로 수
    int part1 = count_paths(ky, kx);
    int part2 = count_paths(N - ky + 1, M - kx + 1);
    cout << part1 * part2 << endl;

    return 0;
}
