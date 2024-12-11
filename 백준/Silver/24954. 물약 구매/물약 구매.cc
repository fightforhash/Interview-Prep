#include <iostream>
#include <vector>
#include <utility>
using namespace std;
const int N = 12;
int c[N];
int cost[N];
int n;
int p[N];
bool check[N];
int ans = 1e9;
vector<int> ord;
vector<pair<int, int>> ad[N]; 

void bt(int d){

    if (d == n + 1){
        //조건
        
        for (int i = 0; i < n; i ++){
            cost[i] = c[i];        
        }
        int result = 0;
        for (auto i: ord){
            for (auto [aj,dj] : ad[i] ){
                aj--;
               cost[aj] = max(cost[aj] - dj, 1);
            }
            result += cost[i];
        }
        //순열의 합 (할인 포함)

        //cerr << result << '\n';
        ans = min(result, ans);
        return;
    }
    
    for (int i = 0; i < n; i++){

        if (!check[i]){
            check[i] = true;
            ord.push_back(i);
            bt(d + 1);
            check[i] = false;
            ord.pop_back();
        }


    }


}
int main(){

    cin >> n;

    for (int i =0; i < n; i ++){
        cin >> c[i];
    }


    

    for (int i = 0; i < n; i++){

        cin >> p[i];
        for (int j = 0; j < p[i]; j++){

            int a,d;
            cin >> a >> d;
            ad[i].push_back(make_pair(a, d));
        }

    }
    bt(1);

    cout << ans;
}