#include <iostream>
using namespace std;

int getPeople(int a, int b){

    if (a == 0){
        return b;
    }

    int total = 0;
    for (int i = 1; i <= b; i++){
        total += getPeople(a - 1, i);
    }
    return total;
}


int main(){

    int T;
    cin >> T;

    while (T--){
        int k, n;
        cin >> k >> n;
        cout << getPeople(k, n) << '\n';
    }

    return 0;

}