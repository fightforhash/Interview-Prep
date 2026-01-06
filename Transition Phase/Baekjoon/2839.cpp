#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N;
int inf = 9999999;
vector<int> homo(N + 1);

int dfs(int weight){
    if (weight < 0) return inf;
    
    if (weight == 0) return 0;

    if (homo[weight] != -1) {
    return homo[weight];
    }
    
    homo[weight] =  min(dfs(weight - 3) + 1, dfs(weight - 5) + 1);
    return homo[weight];
}

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    cin >> N;
    homo.assign(N+1 , -1);
    int res = dfs(N);
    
    return 0;

}