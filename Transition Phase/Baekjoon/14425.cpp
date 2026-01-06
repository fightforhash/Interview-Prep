#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    int n, m;
    cin >> n >> m;

    unordered_map<string, int> pc;
    string s;
    for (int i = 1; i <= n; i++){
        cin >> s;
        pc[s]++;
    }
    string compare;
    int cnt = 0;
    for (int i = 1; i <= m; i++){
        cin >> compare;
        if (pc.count(compare)) {
            cnt++;
        }
    }

    cout << cnt;

}
