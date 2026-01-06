#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    cin.tie(0) -> sync_with_stdio(0);

    int n;
    string s;
    cin >> n >> s;

    for (int i = 0; i < n; i++){
        int scnt = 0;
        int tcnt = 0;

        for(int j = i; j < n; j++){
            if (s[j] == 's') scnt++;
            else tcnt++;
        }
    
    if (scnt == tcnt){
        for (int j = i; j < n; j++){
            cout <<s[j];
        }
        break;
    }
    }

}