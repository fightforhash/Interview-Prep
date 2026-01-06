#include <iostream>
using namespace std;
int n;
char ch = 'A';
char arr[120][120];

void ibuildshiteveryday(int i, int j){
    arr[j][i] = ch;
    ch++;

    if (ch == 'Z' + 1){
        ch = 'A';
    }


}


int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) { // 짝홀 출력 고민
            for (int j = n; j >= 1; j--)
                ibuildshiteveryday(i, j);

        }

        else {
            for (int j = 1; j <= n; j++)
                ibuildshiteveryday(i, j);
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++)
            cout << arr[i][j] << " ";

        cout << "\n";
    }

    return 0;
}