#include <iostream>
#include <algorithm>
using namespace std;
bool compare (int x, int y){
    if (x > y){
        return true;
    }
    return false;
}
int main(){

    int n;
    cin >> n;
    int arr[n+1];
    for (int i = 1; i <= n; i++){
        cin >> arr[i];
        
    }

    sort(arr + 1, arr + n + 1, compare);

    for (int i = 1; i <= n; i++){
        cout << arr[i] << " ";
        
    }
}