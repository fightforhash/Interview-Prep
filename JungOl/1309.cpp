#include <iostream>
using namespace std;

typedef long long ll; 

int main(){

    ll z;
    ll ans = 1;
    cin >> z;
    
    while (z--) {
        if (z == 0) { 
            cout << 1 << "! = " << 1 << '\n'; 
            break; 
        }
        ans *= z + 1; 
        cout << z + 1 << "! = " << z + 1 << " * " << z << "!" << '\n';
    }

    cout << ans;

}