#include <iostream>
using namespace std;

int flips(string s){
    int cnt = 0;
    for (int i = 0; i < s.size(); i++){
        if (s[i] != s[i + 1]){
            cnt++;
        }
    }
    return cnt / 2;
}

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    string s;
    cin >> s;
    
   
    cout << flips(s);

}