#include <iostream>
using namespace std;

const int SIZE = 101;
bool MAP[SIZE][SIZE] = {false}; 

int main() {
    int n;
    cin >> n;

    
    for (int k = 0; k < n; ++k) {
        int x, y;
        cin >> x >> y;
        for (int i = y; i < y + 10; ++i) {
            for (int j = x; j < x + 10; ++j) {
                MAP[i][j] = true;
            }
        }
    }

    int total = 0;

   
    for (int j = 1; j < SIZE; ++j) {
        for (int i = 1; i < SIZE; ++i) {
            if (MAP[i][j] != MAP[i - 1][j]) {
                total++;
            }
        }
    }

    for (int i = 1; i < SIZE; ++i) {
        for (int j = 1; j < SIZE; ++j) {
            if (MAP[i][j] != MAP[i][j - 1]) {
                total++;
            }
        }
    }

    cout << total << '\n'; 
    return 0;
}