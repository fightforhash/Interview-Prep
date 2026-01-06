#include <iostream>
#include <vector>
using namespace std;

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    int n;
    cin >> n;
    vector<int> arr(n + 1);

    for (int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    int carlos = arr[1];

    for (int i = 1; i <= n; i++){
        if (arr[i] > carlos){
            cout << "N";
            return 0;
        }
    }
    cout << "S";
    

}