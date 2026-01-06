#include <iostream>
using namespace std;

int main() {

    int s;
    int res;
    cin >> s;
    
    int cnt = 2;
    while (s--) cnt += (cnt - 1);
    res = cnt * cnt;
    cout << res << endl;
    
}