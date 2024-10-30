#include <iostream>
using namespace std;

const int LM = 100005;
int N, ans, sum;

int main() {
    cin >> N;
    for (int i = 0; i < N; ++i) {
        int num;
        cin >> num;
        if (sum > 0) sum += num;
        else sum = num;
        if (ans < sum) ans = sum;
    }

    cout << ans << endl;
    return 0;
}