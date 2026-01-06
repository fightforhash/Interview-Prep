#include <iostream>
using namespace std;

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    int n;
    int arr[120] = {0};
    cin >> n;
    double m = n;
    
    for (int i = 1; i <= n; i++){
        int v;
        cin >> v;
        if (v == -1){
            m--;
        }else{
            arr[i] = v;
        }
    }
    double sum = 0;
    for (int i = 1; i <= n; i++){
        sum += arr[i];
    }
    
    cout.precision(17);
    cout << sum / m;

}