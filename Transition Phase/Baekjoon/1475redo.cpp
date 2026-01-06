#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int freq[10];

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    string s; 
    cin >> s; 

    for (int i = 0; i < s.size(); i++){
        freq[s[i] - '0']++;
        
    }
    freq[6] += freq[9];

    freq[9] = 0;
    
    freq[6] = (freq[6] + 1) / 2;

    int ans = 0;

    for (int i = 0; i < 10; i++){
        ans = max(ans, freq[i]);
    }
    
    
    cout << ans;
    

}