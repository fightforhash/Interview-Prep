#include <iostream>
#include <cmath>
using namespace std;

long long gcd(long long a, long long b){

    if (b == 0) return a;
    return gcd(b, a % b);
}
int lcm(long long a, long long b){
    return (a / gcd(a, b)) * b;
}

int main(){
    long long p, v, k;
    cin >> p >> v >> k;

    long long a, b, c, d;

    b = floor(k/ lcm(p+1,v+1)); //왜 floor? 
    c = floor(k/(v+1)) - b; 
    d = floor(k/(p+1)) - b;

    a = k - b - c - d;

    cout << a << " " << b << " " << c << " " << d;

}
//O(log(a+b)) cmath, math.h