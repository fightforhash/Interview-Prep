#include <iostream>
using namespace std;

const int N = 54;
int k, n;
int x[N], y[N];

int dist(int i, int j){
    // i번째 집과 j번째 집 사이의 거리를 구하는 함수
    // i번째 집은 점 (x[i], y[i])에 위치함
    // j번째 집은 점 (x[j], y[j])에 위치함
    return abs(x[i] - x[j]) + abs(y[i] - y[j]);
}

int solve() {
    int best_simulation = 1e9;
    
    if(k==1){
        for (int i = 1; i <= n; i++){
            // 지정된 대피소: i
            int complete_time = 0;
            for (int person = 1; person <= n; person++){
                int min_dist = dist(person, i);
                complete_time = max(complete_time, min_dist);
            }
            best_simulation = min(complete_time, best_simulation);
        }
    }
    if(k==2){
        for (int i = 1; i <= n; i++){
            for (int j = i + 1; j <= n; j++){
                // 지정된 대피소: i, j
                int complete_time = 0;
                for (int person = 1; person <= n; person++){
                    int min_dist = min(dist(person, i), dist(person, j));
                    complete_time = max(complete_time, min_dist);
                }
                best_simulation = min(complete_time, best_simulation);
            }
        }
    }
    if (k==3){
        for (int i = 1; i <= n; i++){
            for (int j = i + 1; j <= n; j++){
                for (int k = j + 1; k <= n; k++){
                    // 지정된 대피소: i, j, k
                    int complete_time = 0;
                    for (int person = 1; person <= n; person++){
                        int min_dist = min({dist(person, i), dist(person, j), dist(person, k)});
                        complete_time = max(complete_time, min_dist);
                    }
                    best_simulation = min(complete_time, best_simulation);
                }
            }
        }
    }

    return best_simulation;
}

class Solution {
public:
    int shelter(int _K, int _N, vector<int> &_X, vector<int> &_Y) {
        k=_K;
        n=_N;
        for(int i=1;i<=n;++i){
            x[i]=_X[i-1];
            y[i]=_Y[i-1];
        }
        return solve();
    }
};

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int k, n;
    cin >> k >> n;
    vector<int> X(n), Y(n);
    for(int i=0; i<n; ++i){
        cin >> X[i] >> Y[i];
    }
    cout << Solution{}.solve(k, n, X, Y);
}