#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

using ll = long long;

int main(){
    ll n;
    
    cin >> n;
    vector<ll> t;
    for (ll i = 1; i * i <= n; i++){
        if (n % i  == 0){
            t.push_back(i);
            if (i != n / i){
                t.push_back(n/i);
            }
            
        }
        
    }

    sort(t.begin(), t.end());

    for (ll i = 0; i < t.size(); i++){
        cout << t[i] << " ";
    }

}