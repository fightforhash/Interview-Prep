#include <iostream>
#include <map>
using namespace std;

int arr[10001] = {0, };

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    int cnt = 0;
    int n;
    cin >> n;
        
    for (int i = 0; i < n; i++){
        int val;
        cin >> val;
        arr[val]++;
    }
    
    for (int i = 0; i < 10001; i++){
        while (arr[i]--){
            cout << i << '\n';
        }
    }
    return 0;
}