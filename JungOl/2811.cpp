#include <iostream>
using namespace std; 

bool isPrime(int n){

    if (n < 2) return false;

    for (int i = 2; i * i <= n; i++){
        if (n % i ==0) return false;
    }
    return true;
}

int main(){
    int m;
    for (int i = 1; i <= 5; i++){
    cin >> m;
    if (m < 2) cout << "number one" << '\n';
    else if (isPrime(m)) cout << "prime number" << '\n';
    else cout << "composite number" << '\n';
    }
    return 0;

}