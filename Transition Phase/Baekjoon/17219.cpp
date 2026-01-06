#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    int n, m;
    cin >> n >> m;

    map<string, string> pass;
    

    for (int i = 0; i < n; i++){
        string s, d;
        cin >> s >> d;
        pass[s] = d;
    }
    for (int i = 0; i < m; i++){
        string c;
        cin >> c;
        if (pass.find(c) != pass.end()){
            cout << pass[c] << '\n';
        }
    }

    return 0;


}