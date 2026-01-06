#include <iostream>
#include <vector>
using namespace std;

int main(){

    cin.tie(0) -> sync_with_stdio(0);
    int n;

    cin >> n;
    vector<int> ip(n);
    for (int i = 0; i < n; i++){
        cin >> ip[i];
    }
    
    int m;
    cin >> m;

    while (m--){
        int x;
        cin >> x;

        bool found = false;
        for (int i = 0; i < n; i++){
            if (ip[i] == x){
                found = true;
                break;
            }
        }
        cout << (found ? 1 : 0) << '\n';
    }

    return 0;

}