#include <iostream>
using namespace std;
int binom(int a, int b){

    if (b == 0 || b == a){
        return 1;
    }

    return binom(a - 1, b - 1) + binom(a - 1, b);

}


int main(){

    int n, k;

    cin >> n >> k;

    cout << binom(n, k);


}