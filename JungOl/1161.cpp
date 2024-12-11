#include <iostream>
#include <vector>
using namespace std;

void gnarly(int n, int x, int y, int z){
    cout << n << " : " << x << " -> " << y << '\n';
}

void fuck(int n, int x, int y, int z){
    if (n == 1){
        gnarly(n, x, y ,z);
        return ;
    }
    fuck(n - 1, x, z, y);
    gnarly(n, x, y ,z);
    fuck(n-1, z, y, x);
}


int main(){
    int n;
    cin >> n;

    fuck(n, 1, 3, 2);


}