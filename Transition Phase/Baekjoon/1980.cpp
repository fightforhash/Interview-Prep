#include <iostream>
using namespace std;

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    int n, m, t;

    cin >> n >> m >> t;
     
    int mincoke = t;
    int maxburger = 0;

    for (int i = 0; i <= t / n; i++) {
        for (int j = 0; j <= t / m; j++) {
            int total_time = i * n + j * m;
            if (total_time > t) continue;
            int coke = t - total_time;
            int burger = i + j;

            if (coke < mincoke || (coke == mincoke && burger > maxburger)) {
                mincoke = coke;
                maxburger = burger;
            }
        }
    }

    cout << maxburger << " " << mincoke;

}