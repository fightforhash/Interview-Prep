#include <iostream>
using namespace std;

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    bool arr[103][103];
    int n, x, y;

    for (int i = 0; i < 101; i++){
        for (int j = 0; j < 101; j++){
            arr[i][j] = 0;
        }
    }

    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> x >> y;
        for (int j = x; j < x + 10; j++){
            for (int k = y; k < y + 10; k++){
                arr[j][k] = 1;
            }
        }
    }
    int area = 0;
    for (int i = 0; i < 100; i++){
        for (int j = 0; j < 100; j++){

            if (arr[i][j] == 1){
                area++;
            }

        }
    }

    cout << area;
}