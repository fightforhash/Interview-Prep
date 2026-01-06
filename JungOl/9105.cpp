#include <iostream>
using namespace std;
int arr[100];

void dice(int k, int n){
    if (k == n){
        for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
        }
        cout << '\n';
        return;
    }

    for(int i = 1; i <= 6; i++){
        arr[k] = i;
        dice(k + 1, n);
    }
    return;
}

int main(){

    int n;
    cin >> n;

    dice(0, n);


}