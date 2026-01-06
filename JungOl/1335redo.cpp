#include <iostream>
#include <vector>
#include <utility>
using namespace std;

string dc( vector<vector<int>> &arr, int x, int y, int size){
 //wc, bc 
    
    if (size == 1){
        if (arr[x][y] == 1){ 
            return "1";
        }else{
            return "0";
        }
    }

    

    string tl = dc(arr, x , y , size /2);
    string tr = dc(arr, x + size / 2, y, size /2);
    string bl = dc(arr, x, y + size / 2, size / 2);
    string br = dc(arr, x + size / 2, y + size /2 , size / 2);

    if (tl == "1" && tr == "1" && bl == "1" && br == "1"){
        return "1";
    }else if ( tl == "0" && tr == "0" && bl == "0" && br == "0"){
        return "0";
    }
    return "X" + tl + tr + bl + br;
    
}


int main(){
    int n;
    cin >> n;

    vector<vector<int>> a(n + 1, vector<int> (n + 1));

    for (int i = 1; i <= n; i++){
        for (int j = 1; j<= n; j++){
            cin >> a[i][j];
        }
    }


    cout << dc(a, 1, 1, n);
    
    
    return 0; 
}