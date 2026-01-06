#include <iostream>
using namespace std;

int gcd(int a, int b){
    while (b != 0){
        int t = b;
        b = a % b;
        a = t;
    }
    return a;

}

int lcm(int a, int b){

    return (a * b) / gcd(a, b);

}



int main(){
    int x, y;
    cin >> x >> y;

    cout << gcd(x,y) << '\n';
    cout << lcm(x, y);

}