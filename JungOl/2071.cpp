#include <iostream>
using namespace std;

int main(){

    int n;
    int m;

    cin >> n >> m;

    int t[102][102];

    for (int i = 0; i < n; i++)
        for (int j = 0; j <= n; j++)
            t[i][j] = 0;

    for (int i = 0; i < n; i ++){
        t[i][0] = t[i][i] = 1;
        for (int j = 1; j <= n; j++){
            if (i >= 1 && j >= 1 && t[i][j] == 0) t[i][j] = t[i-1][j-1] + t[i-1][j]; //Core
        }
    }
    
    if (m == 1){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
        if (t[i][j] != 0) cout << t[i][j]<< " " ;
        }
        cout << "\n";
    }
    }
    else if (m == 2){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i; j++)
        cout << " ";{
        for (int j = 0; j < n; j++){
            if (t[n - i - 1][j] != 0) cout << t[n - i - 1][j] << " ";

        }
        cout << '\n';
    }
    }
    }

    else if (m == 3){
    for (int i = n - 1; i >= 0; i--){
        for (int j = n - 1; j >= 0; j--){
            if (t[j][i]!= 0) cout << t[j][i] << " ";
        }
        cout << '\n';
    }
    }



    return 0;





}