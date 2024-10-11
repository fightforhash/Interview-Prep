#include <iostream>
using namespace std;
int n;
int m;
int num = 1;
int main(){

    cin >> n >> m;

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            printf("%d ", num++);
        }
        printf("\n");
    }
}