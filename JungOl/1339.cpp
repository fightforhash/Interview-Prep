#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    if (n < 1 || n > 100 || n % 2 == 0) {
        cout << "INPUT ERROR" << '\n';
        return 0;
    }

    char tri[120][120] = {};
    char ch = 'A';

    for (int c = 0; c <= n/2 ; c++) {
        int strow = n / 2 - c;  // Calculate the starting row for the current column

        // Fill the characters from the starting row to the appropriate row
        for (int r = strow; r < n - strow; r++) {
            tri[r][c] = ch++;  // Place the character in the array
            if (ch > 'Z') ch = 'A';  // Wrap back to 'A' after 'Z'
        }
    }

    for (int i = 0; i < n; i++){
        for (int j = n/2 ; j >= 0; j--){
            if (tri[i][j] != '\0'){
                cout << tri[i][j];
            }else{
                cout << " ";
            }cout << " ";
            

        }
        cout << '\n';
    }
}