#include <iostream>
using namespace std;

typedef long long ll;

ll gcd(ll a, ll b){

    while (b != 0){
        ll tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;

}

ll lcm(ll a, ll b){
    return (a / gcd(a,b)) * b;

}

int main(){
    ll p, v, k;
    cin >> p >> v >> k;

    ll lcm1 = lcm(p + 1, v + 1);
    ll b = k / lcm1;
    ll c = (k / (v + 1)) - b;
    ll d = (k / (p + 1)) - b;
    ll a = k - b - c - d;

    cout << a << " " << b << " " << c << " " << d;
    return 0;
}