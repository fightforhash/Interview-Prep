#include <iostream>
using namespace std;

int paper[111][111];  

int main() {
    int n;
    cin >> n;  
    int sx, sy;
    for (int i = 0; i < n; ++i) {
        cin >> sx >> sy; 
        // Mark the 10x10 area on the grid
        for (int x = sx; x < sx + 10; ++x) {
            for (int y = sy; y < sy + 10; ++y) {
                paper[x][y] = 1;
            }
        }
    }

    int res = 0;  

    
    for (int i = 1; i <= 100; ++i) {
        for (int j = 1; j <= 100; ++j) {
            if (paper[i][j] == 1) {
                res++;
            }
        }
    }

    cout << res << '\n';  

    return 0;
}
