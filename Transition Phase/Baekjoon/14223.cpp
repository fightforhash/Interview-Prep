#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> pll;

int N;
vector<pll> points;

int main() {
    cin.tie(0) -> sync_with_stdio(0);

    cin >> N;
    points.resize(N);
    for (int i = 0; i < N; ++i) {
        cin >> points[i].first >> points[i].second;
    }

    ll minArea = LLONG_MAX;

    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            vector<pll> inside;

            for (int k = 0; k < N; ++k) {
                if (k != i && k != j) {
                    inside.push_back(points[k]);
                }
            }

            ll minX = LLONG_MAX, maxX = LLONG_MIN;
            ll minY = LLONG_MAX, maxY = LLONG_MIN;

            for (auto [x, y] : inside) {
                minX = min(minX, x);
                maxX = max(maxX, x);
                minY = min(minY, y);
                maxY = max(maxY, y);
            }

            ll side = max(maxX - minX, maxY - minY) + 2;

            for (int dx = -3; dx <= 3; ++dx) {
                for (int dy = -3; dy <= 3; ++dy) {
                    ll x1 = minX + dx;
                    ll y1 = minY + dy;
                    int count = 0;

                    for (auto [x, y] : inside) {
                        if (x1 < x && x < x1 + side && y1 < y && y < y1 + side)
                            count++;
                    }

                    if (count == N - 2) {
                        minArea = min(minArea, side * side);
                    }
                }
            }
        }
    }

    cout << minArea << '\n';
    return 0;
}
