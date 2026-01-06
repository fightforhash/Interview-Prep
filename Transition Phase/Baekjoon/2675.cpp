#include <iostream>

using namespace std;

int main() {

    int i;
    int j;
    string b;

    cin >> i;

    while (i--){
        cin >> j >> b;

        for (int t= 0; t < b.length(); t++) {
            for (int k = 0; k < j; k++){
                cout << b[t];
            } 
        }
        cout << '\n';
    }

    return 0;
}