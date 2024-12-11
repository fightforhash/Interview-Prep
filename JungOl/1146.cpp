#include <iostream>
using namespace std;
int n;

int main(){

    cin.tie(0) -> sync_with_stdio(0);
    
    cin >> n;

    int arr[102];
    for (int i = 1; i <= n; i++){
        cin >> arr[i];
    }


    for (int i = 1; i <n; i++){
        int k = i;
        for (int j = i; j <=n; j++){
            if (arr[k] > arr[j]){
                k = j;
            }

        }
    
        swap(arr[k], arr[i]);
    
        for (int j = 1; j <= n; j++){
            cout << arr[j] << " ";
        }cout << '\n';

    }
    
    return 0;

}