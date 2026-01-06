#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int minmov = INT_MAX;
void checkopen(vector<int> num, int j, int k, int count, int i, int m){

    if (i >= m){
        minmov = min(minmov, count);
        return;
    }

    int target = num[i];


    checkopen(num, target, k, count + abs(j - target), i + 1, m);
    checkopen(num, target, j, count + abs(k - target), i + 1, m);

    return;

}

int main(){

    int n, m ,j, k;
    cin >> n;
    cin >> j >> k;

    cin >> m;
    vector<int> NUM(m);

    for (int i = 0; i < m; i++){
        cin >> NUM[i];
    }
    
    checkopen(NUM, j, k, 0, 0, m);

    cout << minmov;
}