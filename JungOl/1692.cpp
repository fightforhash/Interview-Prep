#include <iostream>
using namespace std;

int a, b;
int main(){

    cin >> a >> b;

    int unit = b % 10;
    int ten = (b / 10) % 10;
    int hun = b / 100;

    int ans1 = a * unit;
    int ans2 = a * ten;
    int ans3 = a * hun;

    int finale = a * b;
    cout << ans1 << '\n';
    cout << ans2 << '\n';
    cout << ans3 << '\n';
    cout << finale;


}