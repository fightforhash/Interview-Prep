#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    string s, t;
    cin >> s >> t;

    int h = 0, v = 0;
    for (char c : t) {
        if (c == 'h') h ^= 1;
        else if (c == 'v') v ^= 1;
        else if (c == 'r') {
            h ^= 1;
            v ^= 1;
        }
    }

    unordered_map<char, char> map_h = {
        {'b', 'd'}, {'d', 'b'}, {'p', 'q'}, {'q', 'p'}
    };

    unordered_map<char, char> map_v = {
        {'b', 'p'}, {'p', 'b'}, {'d', 'q'}, {'q', 'd'}
    };

    unordered_map<char, char> map_r = {
        {'b', 'q'}, {'q', 'b'}, {'d', 'p'}, {'p', 'd'}
    };
    string res = s;

    for (char &c : res) {
        if (h && v) c = map_r[c];
        else if (h) c = map_h[c];
        else if (v) c = map_v[c];
        // else 그대로
    }

    if (h) reverse(res.begin(), res.end());

    cout << res;
    return 0;

}