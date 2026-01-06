#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<vector<char>> arr(101);
    int n;
    int num = 0;
    int rowcount = 1;
    cin >> n;
    for (int i = 1; i <=n; i++){ //리사이즈만 도움받음
        arr[i].resize(n + 1);
    }
    for (int i = 1; i <= n; i++){ 
        
        if (rowcount % 2 == 0){
            for (int j = n; j >= 1; j--){
               if (num > 25){
                    num = 0;
                } 
                arr[i][j] = 'A' + num++;
                
                //rowcount++;
            }    
        }else{
            for (int j = 1; j <= n; j++){
                if (num > 25){
                    num = 0;
                }
                arr[i][j] = 'A' + num++;
                //rowcount++;
            }
        }
        rowcount++;
    }
    
    for (int j = 1; j <= n; j++){
        for (int i = 1; i <= n; i++){
            cout << arr[i][j] << ' ';
        }cout << '\n';
    }

}