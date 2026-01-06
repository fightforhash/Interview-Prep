#include <iostream>
#include <vector>
using namespace std;

int n, m;

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    
    cin >> n >> m;

    
    vector<vector<int>> arr(n, vector<int> (m));

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    int k;
    cin >> k;

    while (k--){
        int i, j, x, y;
        cin >> i >> j >> x >> y;

        int sum = 0;

        for (int r = i - 1; r < x; r++){
            for (int c = j - 1; c < y; c++){
                sum += arr[r][c];
            }
        }


        cout << sum << '\n'; 
    }

    return 0;


}