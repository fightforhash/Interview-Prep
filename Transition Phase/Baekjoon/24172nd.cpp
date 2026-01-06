#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
long long s;

int main(){ //메소드를 오히려 끼우면 복잡해지는것 같아 메소드도 제거해버림.

    cin >> s;

    long long low = 0, high = sqrt(s);
    
    while (low <= high){
    long long mid = (high + low) / 2;
        if (mid * mid >= s){
            high = mid;
        }else{
            low = mid + 1;
        }
    }

    cout << low;
    
    return 0;
}