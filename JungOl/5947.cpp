#include <iostream>
using namespace std;

int n;

int main(){

    cin >> n;

    if (n > 50 || n % 2 == 0){
            cout << "INPUT ERROR!";
            return 0;
        }

    for (int i = 1; i <= n / 2 + 1; i++){
        for (int j = 1; j <= i; j++){
            cout << j << " ";

        }
        cout << '\n';
    }
    for(int i = n /2; i >= 1; i--){
        for(int j = 1; j <= i; j++){

            cout << j << " ";

        }
    
        cout << '\n';
    }

}