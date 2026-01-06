#include <iostream>
using namespace std;
bool paper[130][130];
int white = 0, blue = 0;
void solve(int x, int y, int size) {
    
    bool isSameColor = true;
    int color = paper[x][y];
    for (int i = x; i < x + size; i++) {
        for (int j = y; j < y + size; j++) {
            if (paper[i][j] != color) {
                isSameColor = false;
                break;
            }
        }
        if (!isSameColor) break;
    }

    if (isSameColor) {
        if (color == 0) {
            white++;
        } else {
            blue++;
        }
        return;
    }

    int newSize = size / 2;
    solve(x, y, newSize);
    solve(x, y + newSize, newSize);
    solve(x + newSize, y, newSize);
    solve(x + newSize, y + newSize, newSize);
}

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> paper[i][j];
    }
    }

    solve(0, 0, n);

    cout << white << '\n' << blue << '\n';

}