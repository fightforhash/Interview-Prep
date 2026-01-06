#include <iostream>
#include <vector>
using namespace std;
int arr[10];

int n, m;
void dice(int lvl, int sum){

    if(lvl == n && sum == m){
        for (int i = 0; i < n; i++){
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }
    
    for(int i = 1; i <= 6; i++){
        if (lvl < n){ // 가지치기 더해줘야함
        arr[lvl] = i;
        dice(lvl + 1, sum + i);
        }
    }
    return;
}

int main(){

    
    cin >> n >> m;
    dice(0, 0);

}