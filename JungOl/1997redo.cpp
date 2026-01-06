#include <iostream>
#include <vector>
using namespace std;

int main(){
    int d, k;
    cin >> d >> k;

    vector<int> fib(d + 1);
    fib[1] = 1;
    fib[2] = 1; 
    for (int i = 3; i <= d; i++){
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    int x = fib[d - 2];
    int y = fib[d - 1];

    for (int A = 1; A <= k / (x + y); A++){

        if ((k - x * A) % y == 0){
            int B = (k - x * A) / y;
        if (A <= B){
            cout << A << '\n' << B;
            return 0;
        }
        }
    }
    return 0;
}