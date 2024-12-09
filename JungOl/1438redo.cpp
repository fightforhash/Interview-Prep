#include <iostream>
using namespace std;

int main(){

    int n, x, y;
    int area = 0;
    bool check[101][101] = {};
    cin >> n;
    
    while (n--){
        cin >> x >> y;

        for (int i = y; i < y + 10; i++){
            for (int j = x; j < x + 10; j++){
                if (!check[i][j]){
                check[i][j] = true;
                area++;
                }
            }
        }
        
    }

    cout << area;
    return 0; 

}