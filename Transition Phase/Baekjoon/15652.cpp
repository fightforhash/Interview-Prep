#include <iostream>
using namespace std;
int n,m;
int arr[11];
int check[11];

void backtrack(int t, int s){

    if (t == m){
        for (int i = 0; i < m; i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
        return;
    }

    for (int i = s; i <= n; i++){
        arr[t] = i;
        backtrack(t + 1, i); 
    }

}

int main(){
    cin >> n >> m;
    backtrack(0, 1);
}