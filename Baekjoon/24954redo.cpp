#include <iostream>
#include <vector>
#include <utility> //Pair
using namespace std;
const int MAX_N = 13;
int n;
int p[MAX_N];
int c[MAX_N];
int cost[MAX_N];
int aj;
int dj;
bool check[MAX_N];

int answer = 1e6;
vector<int> order;
vector<pair<int, int>> ad[MAX_N];

void backtrack(int depth){

    if (depth == n + 1){ //기저조건 depth 가 물약의 종류 이상을 넘어갈떄
        for(int i = 1; i <= n; i++){
            cost[i] = c[i];
        }
        int result = 0;
        for (auto i: order){
            for (auto [a , b]: ad[i]){
                cost[a] = max(cost[a] - b, 1); //최대 할인을 cost 배열에 적용
            }   
            result += cost[i];
        }
        //cerr << result;
        answer = min(result, answer); //가장 '저렴하게' 구매한 물약의 동전 개수
        return;
    }

    for (int i = 1; i <= n; i++){ //기본 bt format

        if (!check[i]){
            check[i] = true; 
            order.push_back(i);
            backtrack(depth + 1);
            check[i] = false;
            order.pop_back();
        }
    }

}

int main(){

    cin >> n;

    for (int i = 1; i <= n; i++){
        cin >> c[i];
    }

    for (int k = 1; k <= n; k++){
        cin >> p[k];
        for (int j = 1; j <= p[k]; j++){
            cin >> aj >> dj;
            ad[k].push_back(make_pair(aj, dj));
        }

    }
    backtrack(1);
    cout << answer;


}