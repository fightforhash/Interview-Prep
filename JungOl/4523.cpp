#include <iostream>
#include <algorithm>
using namespace std;
const int b = 1e7;
int arr[b];
int copie[b];
int main(){
    int n;
    
    cin >>n;
    
    for (int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    int s;
    int e;
    cin >> s >> e;
    
    
    sort(arr + s + 1, arr + (e + 1) + 1);

    for (int i = 1; i <= n; i++){
        cout << arr[i] << ' ';
    }cout << '\n';

    sort(arr + 1, arr + n + 1);

    for (int i = 1; i <= n; i++){
        cout << arr[i] << ' ';
    }cout << '\n';


}