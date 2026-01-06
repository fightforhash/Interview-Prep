#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    int n, m;
    cin >> n >> m;
    int arr[n];

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr, arr + n);
    int cnt = 0;
    int maxs = -1;

    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            for (int k = j + 1; k < n; k++){

                int diff = arr[k] - arr[i];

                if (diff <= m){
                    cnt += 1;
                    int cursum = arr[i] + arr[j] + arr[k];
                    if (cursum > maxs){
                        maxs = cursum;
                    }
                }else{
                    break;
                }
            }
        }
    }

    if (cnt == 0){
        cout << -1;
    }else{
        cout << cnt << " " << maxs;
    }

}