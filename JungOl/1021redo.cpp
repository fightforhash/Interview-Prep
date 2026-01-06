#include <iostream>
#include <vector>
using namespace std;

int arr[101][101];
int n, m;
int isbase[101];

bool check(){

    for(int i = 1; i < n; i++){
        if (arr[n][i] > 0 && isbase[i] == 0){
            return true;
        }
    }
    return false;
}

int main(){

    cin >> n >> m;

    for(int i = 1; i <= m; i++){
        int prod, part, quant;
        cin >> prod >> part >> quant;
        arr[prod][part] = quant;
    }

    for (int i = 1; i < n; i++){
        bool isb = true;
        for (int j = 1; j < n; j++){
            if (arr[i][j] > 0){
                isb = false;
                break;
            }
        }
        isbase[i] = isb;

    }

    while (check()){

        for (int i = 1; i < n; i++){
            if (arr[n][i] > 0 && isbase[i] == 0){
                for (int j = 1; j < n; j++){
                    arr[n][j] += arr[i][j] * arr[n][i];
                }
                arr[n][i] = 0;
            }
        }
    }

    for (int i = 1; i < n; i++){
        if (arr[n][i] > 0){
            cout << i << " " << arr[n][i] << '\n';
        }
    }

}