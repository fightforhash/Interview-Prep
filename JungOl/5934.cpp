#include <iostream>
using namespace std;
int n;


int main(){
    cin >> n;
    if (n <= 0 || n > 100 || n % 2 == 0) {
        cout << "INPUT ERROR!" << '\n';
        return 0;
    }
    int mid = n / 2 + 1;
    

    for (int i = 1; i <= (n / 2) + 1; i++) {
        
        for (int j = 1; j < i; j++) {
            cout << " ";
        }
        
        for (int j = (n / 2) + 1; j >= i; j--) {
            cout << "*";
        }
        cout << "\n";
    }

    for (int i = 1; i<= n/2; i++){
        for (int j = 1; j <= n/2; j++){
            cout << " ";
        }

        for (int j = 1; j <= i + 1; j++){
            cout << "*";
        }
        cout << "\n";
    }
}