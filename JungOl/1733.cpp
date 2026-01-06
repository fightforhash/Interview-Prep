#include <iostream>
using namespace std;

int board[19][19];
int dx[4] = {1, 0, 1, 1};  
int dy[4] = {0, 1, 1, -1};

int main() {
    // Input the board state
    for (int y = 0; y < 19; y++)
        for (int x = 0; x < 19; x++)
            cin >> board[y][x];
    
    for (int y = 0; y < 19; y++) {
        for (int x = 0; x < 19; x++) {
            if (board[y][x] == 0) continue;
            int color = board[y][x];
            for (int dir = 0; dir < 4; dir++) {
                int cnt = 1;
                int ny = y, nx = x;
                while (true) {
                    ny += dy[dir];
                    nx += dx[dir];
                    if (ny < 0 || ny >= 19 || nx < 0 || nx >= 19 || board[ny][nx] != color)
                        break;
                    cnt++;
                }
                int prevY = y - dy[dir];
                int prevX = x - dx[dir];
                if (cnt == 5 && (prevY < 0 || prevY >= 19 || prevX < 0 || prevX >= 19 || board[prevY][prevX] != color)) {
                    cout << color << '\n' << y + 1 << ' ' << x + 1 << '\n';
                    return 0;
                }
            }
        }
    }
    cout << 0 << '\n';
    return 0;
}