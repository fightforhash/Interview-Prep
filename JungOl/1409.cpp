#include <iostream>
#include <climits>
using namespace std;

int minmov = INT_MAX;

void dfs(int a[], int j, int k, int mc, int i, int l){

    if (i > l){
        minmov = min(minmov, mc);
        return;
    }

    int target = a[i];

    dfs(a, target, k, mc + abs(j - target) , i + 1, l); //두 이동거리 중 작은 값 선택하여 이동
    dfs(a, target, j, mc + abs(k - target) , i + 1, l); 

    return;
}

int main(){

    int n, j, k, l, arr[100];
    cin >> n;
    cin >> j >> k;
    cin >> l;

    for (int i = 1; i <= l; i++){
        cin >> arr[i];
    }
    dfs(arr, j, k, 0, 1, l);
    
    cout << minmov << '\n';
    return 0;

}