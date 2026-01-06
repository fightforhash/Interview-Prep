#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool groupcheck(string s){
    vector<bool> checked(26, false);
    char prev = s[0];
    checked[prev - 'a'] = true;

    for (int i = 1; i < s.size(); i++){
        if (checked[s[i] - 'a'] && s[i] != prev){
            return false;
        }
        prev = s[i];
        checked[s[i] - 'a'] = true;
    }

    return true;

}


int main(){
    cin.tie(0) -> sync_with_stdio(0);
    int N;
    cin >> N;

    int count = 0;
    for (int i = 0; i < N; ++i) {
        string word;
        cin >> word;
        if (groupcheck(word)) {
            count++;
        }
    }

    cout << count << '\n';

}