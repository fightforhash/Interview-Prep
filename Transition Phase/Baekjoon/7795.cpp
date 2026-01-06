#include <iostream>
#include <algorithm>
using namespace std;

int Binary(int b[], int n, int target){
    int left = 0; int right = n - 1;
    int cnt = 0;

    while (left <= right){
        int mid = (left + right) / 2;
        if (b[mid] < target){
            cnt = mid + 1;
            left = mid + 1;
        }else{
            right = mid - 1;
        }
    }
    return cnt;
}

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    int tc;
    cin >> tc;
  
    
    for (int i = 0; i < tc; i++){

        int n, m;
        cin >> n >> m;
        int a[n], b[m];

        for (int j = 0; j < n; j++) cin >> a[j];
        for (int j = 0; j < m; j++) cin >> b[j];

        sort(b, b + m);

        int ans = 0;
        for (int i = 0; i < n; i++){
            ans += Binary(b, m , a[i]);
        }
        cout << ans << '\n'; 
    }
    return 0;
    
} 