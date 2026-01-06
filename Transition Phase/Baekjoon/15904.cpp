#include <iostream>
#include <vector>
using namespace std;

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    string s;
    getline(cin, s);

    string target = "UCPC";
    int idx = 0;

    for (char c : s){
        if (c == target[idx]){
            idx++;
        }
        
        if (idx == target.length()){
            break;
        }
    }

    if (idx == 4) cout << "I love UCPC" << '\n';
    else cout << "I hate UCPC" << '\n';

    return 0;

}