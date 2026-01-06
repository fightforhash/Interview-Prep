#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n;
    n = 2;

    for (int i = 1; i <= 9; i++){
        printf("%d * %d = %2d   %d * %d = %2d   %d * %d = %2d\n", n, i, n*i, n + 1, i , (n+1)*i, n+2, i, (n+2) * i);

    }

}