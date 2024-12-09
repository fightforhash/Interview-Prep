#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    string arr;
    
    cin >> n >> arr;

    int red = 0, blue = 0;
    int rs = 0, bs = 0, re = 0, be = 0;

    
    for (int i = 0; i < n; ++i) {
        if (arr[i] == 'R') red++;
        else blue++;
    }

    
    for (int i = 0; i < n; ++i) {
        if (i == 0) {
            if (arr[i] == 'R') rs = 1;
            else bs = 1;
        } else if (arr[i] != arr[i - 1]) {
            break;
        } else {
            if (arr[i] == 'R') rs++;
            else bs++;
        }
    }

    for (int i = n - 1; i >= 0; --i) {
        if (i == n - 1) {
            if (arr[i] == 'R') re = 1;
            else be = 1;
        } else if (arr[i] != arr[i + 1]) {
            break;
        } else {
            if (arr[i] == 'R') re++;
            else be++;
        }
    }
    

    // 최소 이동 횟수 계산
    int val = red - rs;
    val = min(val, red - re);
    val = min(val, blue - bs);
    val = min(val, blue - be);

    // 결과 출력
    cout << val << endl;

    return 0;
}