#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    string s;
    string t;

    getline(cin ,s);
    getline(cin, t);

    string ans;

    for (int i = 0; i < s.size() ;i++){
        ans += s[i];
    }
    for (int i = 0; i < t.size() ;i++){
        ans += t[i];
    }

    sort(ans.begin(), ans.end());
    
    cout << ans;
}