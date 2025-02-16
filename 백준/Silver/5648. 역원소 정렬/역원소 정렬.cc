#include <iostream>
#include <algorithm>
#include <string> 
using namespace std;

long long dividedigit(long long y){
    long long res = 0;

    while (y > 0){
        res *= 10;
        res += y % 10;
        y /= 10;
    }

    return res;
    
}

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    long long n; 
    vector<long long> z;
    cin >> n;
    for (long long i = 0; i < n; i++){
        long long c;
        cin >> c;
        z.push_back(dividedigit(c));

    }
    sort(z.begin(), z.end());

    for (auto P : z){
        cout << P << '\n';
    }
}