#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int arr[100][100];  
    int text = 1;

    // Upper triangle including the main diagonal
    for (int i = 0; i < N; i++) { 
        int cnt = 0;

        // Odd diagonal
        if (i % 2 != 0) {
            for (int c = 0; c < i + 1; c++) { 
                arr[i - cnt][cnt] = text++;
                cnt++;
            }
        }
        // Even diagonal
        else {
            for (int c = 0; c < i + 1; c++) {
                arr[cnt][i - cnt] = text++;
                cnt++;
            }
        }
    }

    // Lower triangle excluding the main diagonal
    for (int i = 1; i < N; i++) { // Moving the cursor (line change)
        int cnt = 0;

        // Odd diagonal
        if ((i + N - 1) % 2 != 0) {
            for (int c = i; c < N; c++) { // Internal iteration
                arr[N - 1 - cnt][i + cnt] = text++;
                cnt++;
            }
        }
        // Even diagonal
        else {
            for (int c = i; c < N; c++) {
                arr[i + cnt][N - 1 - cnt] = text++;
                cnt++;
            }
        }
    }

    // Print the array
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}

