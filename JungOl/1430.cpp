#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){

    int a, b, c;
    cin >> a >> b >> c;

    long long result = a * b * c;

    string result_s = to_string(result);
    int digitc[20] = {0}; // 배열값 지정 주의

    for (char c : result_s){ // core
        digitc[c - '0']++;
    }

    for (int i = 0; i < 10; i++){

        cout << digitc[i] << '\n';

    }

    return 0;
}