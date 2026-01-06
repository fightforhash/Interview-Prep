#include <iostream>
using namespace std;

bool isPrime(int N){
    if (N < 2) return false;


    for (int i = 2; i * i <= N; i++){
        if (N % i == 0)
            return false;
    }

    return true;
    
}

void output(int N) {
    if (isPrime(N)) {  // If N itself is a prime number
        cout << N << "\n";
        return;
    }

    int flag = 0;
    for (int i = 1; !flag; i++) {
        // Check if (N - i) or (N + i) is prime
        if (isPrime(N - i)) {
            cout << N - i << " ";
            flag++;
        }
        if (isPrime(N + i)) {
            cout << N + i << " ";
            flag++;
        }
    }
    cout << '\n';
}

int main(){

    
    int n;
    cin >> n;
    int m[102];
    
    
    for (int i = 1; i <= n; i++){
        cin >> m[i];
    }

    for (int i = 1; i <= n; i++) {
        output(m[i]);
    }

    return 0;


}