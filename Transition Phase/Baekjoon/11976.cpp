#include <iostream>
using namespace std;

int main(){

    cin.tie(0) -> sync_with_stdio(0);
    int b1, b2, s1, s2, g1,g2, p1, p2;
    cin >> b1 >> b2 >> s1 >> s2 >> g1 >> g2 >> p1 >> p2;

    cout << max(0, s2 - s1 + g2 - g1 + p2 - p1) << '\n';
    cout << max(0, g2 - g1 + p2 - p1) << '\n';
    cout << max(0, p2 - p1) << '\n';    


}