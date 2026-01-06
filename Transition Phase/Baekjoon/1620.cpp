#include <iostream>
#include <map>
#include <cctype>
#include <string>
using namespace std;

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    int n, m;
    cin >> n >> m;

    map<string,int> poke;
    map<int, string> num;

    for(int i = 1; i <= n; i++){
        string s;
        cin >> s;
        poke[s] = i;
        num[i] = s;
    } 

    
    for (int i = 0; i < m; i++){
        string q;
        cin >> q;

        if (isdigit(q[0])){
            int n = stoi(q);
            cout << num[n] << '\n';
        }else{
            cout << poke[q] << '\n';
        }
    }
}