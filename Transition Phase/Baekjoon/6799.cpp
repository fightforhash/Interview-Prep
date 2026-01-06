#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    int n;
    cin >> n;
    vector<pair<string, int>> comps;
    int compute;
    string str;

    int r, s, d;
    
    for (int i = 0; i < n; i++){
        cin >> str;
        cin >> r >> s >> d;
        compute = 2 * r + 3 * s + d;
        comps.emplace_back(str, compute);
    }

    sort(comps.begin(), comps.end(), [](const pair<string, int> &a, const pair<string, int>& b) {
        if (a.second != b.second)
            return a.second > b.second;
        return a.first < b.first;
    });

    if (!comps.empty()){
    cout << comps[0].first << '\n';
    if (n > 1 && comps[1].second != comps[0].second){
        cout << comps[1].first << '\n';
    }else if (n > 1){
        cout << comps[1].first << '\n';
    }
    }

    return 0;

}