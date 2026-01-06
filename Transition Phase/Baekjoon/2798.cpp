#include <iostream>
#include <vector>
using namespace std;

int main(){

    int n, m;
    cin >> n >> m;

    vector<int> arr(n);

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int ans = 0;

    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            for (int k = j + 1; k < n; k++){
                int tmp = arr[i] + arr[j] + arr[k];
                if (tmp > m){
                    continue;
                }
                else if (tmp < ans){
                    continue;
                }
                else{
                    ans = tmp;
                }
            }
        }
    }

    cout << ans;

}