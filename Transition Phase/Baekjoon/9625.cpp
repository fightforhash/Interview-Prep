#include <iostream>
using namespace std;

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    int k;
    cin >> k;

    int x = 1;
    int y = 0;

    // A A B B B 5
    // B B BA BA BA    
    //newx newy

    //newx = y이고, newy 는 x + y이다..
    int newx;
    int newy;        

    for (int i = 0; i < k; i++) {
        newx = y;
        newy = x + y;

        x = newx;
        y = newy;
    }
     
     cout << x << ' ' << y ;
}