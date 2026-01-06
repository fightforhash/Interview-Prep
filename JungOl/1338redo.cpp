#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    vector<vector<char>> arr(101, vector<char>(101, '\0'));
    cin >> n;
    char alpha = 'A';

    
    for (int i = 1; i <= n; i++){
        for (int j = i, k = n; j <= n; j++, k--){
            arr[j][k] = alpha++;
            if (alpha > 'Z'){
                alpha = 'A';
            }
        }
    }
    for (int i = 1; i <= n; i++){
        for (int j = i; j < n; j++){
            cout << "  ";
        }
        for (int j = 1; j <= n; j++){
            if (arr[i][j] != '\0'){
                //cout << i << " ";
                //cout << j << " ";
                cout << arr[i][j] << " ";
            }
        }cout << '\n';
        
    }
}