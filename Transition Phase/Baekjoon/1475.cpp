#include <iostream>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    string s;
    cin >> s;
    
    unordered_map<int, int> a;

    for (int i = 0; i < s.size(); i++){
        if (s[i] == '6' || s[i] == '9'){
            a[6]++;
        }else{
            a[s[i] - '0']++;
        }
    }

    int sixnine = (a[6] + 1) / 2;

    int max1 = 0;
    for (auto const& [key, val] : a) { 
        if (key != 6) {
            max1 = max(max1, val);
        }
    }

    int ans = max(max1,sixnine);


    cout << ans;

}