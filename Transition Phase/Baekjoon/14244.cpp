#include <iostream>
using namespace std;
int n;
int m;

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> m;

    for (int i = 0; i < m; i++){
        cout << "0 " << i+1;
        cout << "\n";
    }
    for (int i = m; i < n - 1; i++){
        cout << i << " " << i+1;

        cout << "\n";
    }
    

    
}


