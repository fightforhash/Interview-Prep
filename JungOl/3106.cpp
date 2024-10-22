#include <iostream>
#include <string>
using namespace std;

int A, B;  
string S; 

char toChar(int d) {
    if (d < 10) return d + '0';  // Convert to '0'-'9'
    return d + 'A' - 10;         // Convert to 'A'-'Z'
}

void dToB(long long d) {
    if (d < B) {
        cout << toChar(d);
        return;
    }
    dToB(d / B);
    cout << toChar(d % B);
}

int main() {
    while (cin >> A >> S >> B && A) {  
        long long d = 0;  

        // Convert the input number from base A to decimal
        for (char ch : S) {
            if (ch >= 'A') {
                d = d * A + (ch - 'A' + 10);  // For characters 'A'-'Z'
            } else {
                d = d * A + (ch - '0');       // For digits '0'-'9'
            }
        }

        dToB(d);
        cout << '\n';
    }

    return 0;
}