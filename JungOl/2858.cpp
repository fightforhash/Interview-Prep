#include <iostream>
#include <cstring>  // For strlen
using namespace std;

const int MAX_SIZE = 100010;

char s[MAX_SIZE];  // Input string
int openCount = 0, totalPieces = 0;

void solve() {
    cin >> (s + 1); 

    for (int i = 1; i <= strlen(s + 1); ++i) {
        if (s[i] == ')' && s[i - 1] == '(') {
            openCount--;                
            totalPieces += openCount;  
        } else if (s[i] == ')') {
            openCount--;  // End of a rod
            totalPieces++;  // Add one piece for the rod ending
        } else if (s[i] == '(') {
            openCount++;  // Start of a new rod
        }
    }

    cout << totalPieces << '\n';  // Output the total number of pieces
}

int main() {
    solve();  // Call the solve function
    return 0;
}