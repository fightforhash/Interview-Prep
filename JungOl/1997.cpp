#include <iostream>
using namespace std;

int main() {
    int D, K;
    cin >> D >> K;

    int a[31] = {1, 0};   
    int b[31] = {0, 1};  

    
    for (int i = 2; i < D; ++i) {
        a[i] = a[i - 1] + a[i - 2];
        b[i] = b[i - 1] + b[i - 2];
    }

    
    for (int x = 1; x <= K / 2; ++x) {
        if ((K - x * a[D - 1]) % b[D - 1] == 0) {
            int y = (K - x * a[D - 1]) / b[D - 1];
            cout << x << '\n' << y << '\n';
            return 0;
        }
    }
    return 0;
}
