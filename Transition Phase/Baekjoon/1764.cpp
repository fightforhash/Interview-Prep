#include <iostream>
#include <map>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    int n, m;
    cin >> n >> m;
    map<string, int> index;
    vector<string> ans;
    for (int i = 0; i < n; i++){
        string s;
        cin >> s;
        index[s] = i;
    }

    for (int i = 0; i < m; i++){
        string d;
        cin >> d;
        if (index.find(d) != index.end()){
            ans.push_back(d);
        }
    }
    
    sort(ans.begin(), ans.end());
    cout << ans.size() << '\n';
    
    for (auto c : ans){
        cout << c << '\n';
    }

}