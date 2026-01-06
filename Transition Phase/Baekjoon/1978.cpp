#include <iostream>
#include <cmath>
using namespace std;
const int maxn = 105;
int n; 
int cnt = 0;
int arr[maxn];

bool isPrime(int n){
    if (n == 1){
        return false;
    }
    for (int d = 2; d * d <= n; d++){
        if (n % d == 0){
            return false;
        }
    }

    return true; 
}

int main(){

    
    cin >> n;
    
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    for (int i = 0; i < n; i++){
        if (isPrime(arr[i])){
            cnt++;
        }
    }
    cout << cnt;

}