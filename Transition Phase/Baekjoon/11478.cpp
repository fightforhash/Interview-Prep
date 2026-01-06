#include <iostream>
#include <set>
using namespace std;

int main() {
    std::set<string> M;
    string s;

    cin >> s;

    int i, j, l = s.length();

    for (i = 0; i < l; i++){
        for (j = i; j < l; j++){
            M.insert(s.substr(i, j - i + 1));

        }
    }

    cout << M.size() << endl;
}