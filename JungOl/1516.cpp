#include <iostream>
#include <map>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string s;

    while (getline(cin, s)) {
        if (s == "END") break;
        
        map<string, int> cnt;
        istringstream ss(s);
        string w;

        while (ss >> w) {
            if (w.back() == '.') {
                w.pop_back();
            }
            cnt[w]++;
        }

        for (const auto& p : cnt) {
            cout << p.first << " : " << p.second << '\n';
        }
    }

    return 0;
}