#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
bool canMakeCables(const vector<int>& cables, int targetLength, int N) {
    ll count = 0;
    for (int cable : cables) {
        count += cable / targetLength;  
    }
    return count >= N;  
}


int main(){

    ll n, m;
    cin >> n >> m;

    vector<int> a(n);

    for (auto &c: a){
        cin >> c;
    }
    
    ll low = 1, high = *max_element(a.begin(), a.end());
    ll res = 0;

    while (low <= high){

        ll mid = (low + high) / 2;

        if (canMakeCables(a, mid, m)){
            res = mid;
            low = mid + 1;
        }else{
            high = mid - 1;
        }

    }

    cout << res;
    return 0;
}