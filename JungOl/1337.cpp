#include <iostream>
using namespace std;

int main(){
    int n;

    cin >> n;

    int t[101][101];
    
    int m = n;
    int x = -1, y = -1;
    int num = 0;
    
    for (int i = 0; i < m; ++i) { //0부터 시작 -> 0인덱스부터 시작
        for (int j = i; j < m; ++j) {
            if (i % 3 == 0) { //빗변
                x++; y++;  
            } else if (i % 3 == 1) { // 밑변 
                y--;  // Move left
            } else if (i % 3 == 2) { // 높이
                x--;  // Move up
            }
            t[x][y] = num++ % 10;  // 0-9까지 떄려박음
        }
    }

    // Print the triangular matrix
    for (int i = 0; i < m; ++i) { //0인덱스가 코어니 0베이스 출력
        for (int j = 0; j < i + 1; ++j) { //윗부분 0 출력하려면 i+1
            cout << t[i][j] << " ";
        }
        cout << '\n';  // Move to the next line after each row
    }

    return 0;

}