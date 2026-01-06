#include <iostream>
#include <string>
using namespace std;
int hash1;
int L;
string s;
int r = 31;
int M = 1234567891;

int main(){
    
    cin >> L;
    cin >> s;
    
    long long hash1 = 0;
    long long cur = 1;

    for (int i = 0; i < L; i++){
        int ai = int(s[i]) - int('a') + 1;
        hash1 = (hash1 + ai * cur) % M;
        cur = (cur * r) % M;

    }

    cout << hash1;


}