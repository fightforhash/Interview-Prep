#include <iostream>
#include <vector>
using namespace std;

int strikeBall(int a, int b) {
    string x = to_string(a), y = to_string(b);
    int strikes = 0, balls = 0;
    for (int i = 0; i < 3; ++i) {
        if (x[i] == y[i]) strikes++;
        else if (y.find(x[i]) != string::npos) balls++;
    }
    return strikes * 10 + balls; 
}

int main() {
    int N, ans = 0;
    cin >> N;
    vector<tuple<int, int, int>> q(N);
    for (auto& [num, s, b] : q) cin >> num >> s >> b;

    for (int i = 123; i <= 987; ++i) {
        string s = to_string(i);
        if (s[0] == s[1] || s[1] == s[2] || s[0] == s[2] || 
            s[0] == '0' || s[1] == '0' || s[2] == '0') continue;
        bool valid = true;
        for (auto [num, s, b] : q)
            if (strikeBall(i, num) != s * 10 + b) valid = false;
        ans += valid;
    }
    cout << ans << '\n';
}
