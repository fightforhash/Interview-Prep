#include <iostream>
#include <string>
using namespace std;

int decomp(int a){
    int sum = 0;

    while (a > 0){
        sum += a % 10; 
        a /= 10;
    }
    return sum;
}


int main(){

    int n;
    cin >> n;
    
    int z = 0;
    for (int i = 0; i < n; i++){
        if (decomp(i) + i == n){
            z = i;
            break;
        }
    }

    cout << z;

}