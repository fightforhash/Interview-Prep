#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    cin.tie(0) -> sync_with_stdio(0);
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i =0; i < n; i ++){

        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    if (n == 0){
        cout << 0 << '\n';
        return 0;
    }
    int bottom = (15 * n + 50) / 100;
    int top = n - 1 - ((15 * n + 50) / 100);

    int difficulty = 0;
    for (int i = bottom; i <= top; i++ ){
        difficulty += arr[i];
    

    int ans = ((10 * difficulty) + (5 * (top - bottom + 1))) / (10 * (top - bottom + 1));

    cout << ans;

}
