#include <iostream>
using namespace std;

int bingo[5][5];  // 빙고판
int marked[5][5] = {0};  // 숫자가 불린 후 체크된 위치
int called[25];  // 사회자가 부르는 수

// 빙고 줄의 개수를 계산하는 함수
int countBingoLines() {
    int lines = 0;

    // 가로줄 검사
    for (int i = 0; i < 5; ++i) {
        bool complete = true;
        for (int j = 0; j < 5; ++j) {
            if (!marked[i][j]) complete = false;
        }
        if (complete) ++lines;
    }

    // 세로줄 검사
    for (int j = 0; j < 5; ++j) {
        bool complete = true;
        for (int i = 0; i < 5; ++i) {
            if (!marked[i][j]) complete = false;
        }
        if (complete) ++lines;
    }

    // 대각선 검사 (왼쪽 위 -> 오른쪽 아래)
    bool diag1 = true;
    for (int i = 0; i < 5; ++i) {
        if (!marked[i][i]) diag1 = false;
    }
    if (diag1) ++lines;

    // 대각선 검사 (오른쪽 위 -> 왼쪽 아래)
    bool diag2 = true;
    for (int i = 0; i < 5; ++i) {
        if (!marked[i][4 - i]) diag2 = false;
    }
    if (diag2) ++lines;

    return lines;
}

int main() {
    // 빙고판 입력
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cin >> bingo[i][j];
        }
    }

    // 사회자가 부르는 수 입력
    for (int i = 0; i < 25; ++i) {
        cin >> called[i];
    }

    // 수를 부를 때마다 해당 숫자를 체크하고 빙고 줄을 검사
    for (int k = 0; k < 25; ++k) {
        // 부른 숫자에 해당하는 위치를 찾아 체크
        for (int i = 0; i < 5; ++i) {
            for (int j = 0; j < 5; ++j) {
                if (bingo[i][j] == called[k]) {
                    marked[i][j] = 1;

                    // 빙고가 3줄 이상 완성되면 출력 후 종료
                    if (countBingoLines() >= 3) {
                        cout << k + 1 << endl;
                        return 0;
                    }
                }
            }
        }
    }

    return 0;
}
