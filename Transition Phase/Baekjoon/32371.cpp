#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<vector<char>> a(4, vector<char>(10));
    vector<vector<bool>> check(4, vector<bool>(10, false));

    for (int i = 0; i < 4; i ++){
        for (int j = 0; j < 10; j++){
            cin >> a[i][j];
        }
    }

    string input;
    cin >> input;

    for (char c : input){
        for(int i = 0; i < 4;i++){
            for (int j = 0; j < 10; j++){
                if (a[i][j] == c){
                    check[i][j] = true;
                }
            }
        }
    }

    for (int i = 1; i < 3; i++) {         
        for (int j = 1; j < 9; j++) {     
            bool isChecked = true;
            for (int dx = -1; dx <= 1; dx++) {
                for (int dy = -1; dy <= 1; dy++) {
                    if (!check[i + dx][j + dy]) {
                        isChecked = false;
                    }
                }
            }
            if (isChecked) {
                cout << a[i][j] << '\n';
                return 0;
            }
        }
    }

    return 0;
}