#include <iostream>
#include <cmath>
#include <cstdio>
#include <climits>
using namespace std;
__int128_t s;
void BS(__int128_t k){
    __int128_t ans = LLONG_MAX;
    __int128_t low = 0, high = k; //적당히 큰 수로 잡음 
    
    while (low <= high){
    
    __int128_t mid = (__int128_t (low) + high )/ 2;
   
    if (mid * mid >= k){ //부동소숫점 문제 해결 위해 mid * mid로 다시 시도
        high = mid - 1;
        ans = min(ans, mid);
    }else{
        low = mid + 1;
    }
}
    cout << (long long) (ans);
    
    return;
    }

int main(){
    long long _s;
    cin >> _s;
    s = _s; 
    BS(s);

    return 0;
}