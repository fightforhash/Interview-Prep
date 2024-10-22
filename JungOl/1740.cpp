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
    int m, n;
    cin >> m >> n;
    int minprime = 0;
    int sum = 0;
    bool find = false;
    for (int i = m; i <= n; i++){
        if (isPrime(i)){
            sum += i;
            if (i < minprime || minprime == 0) minprime = i;
            find = true;
        }

    }

    if (!find){
        cout << -1 << '\n';
    }else{
        cout << sum << '\n';
        cout << minprime << '\n';
    }

    return 0;
}