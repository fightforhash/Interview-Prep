#include <iostream>
#include <string>
using namespace std;

int A, B;  
string S; 

char toChar(int d) {
    if (d < 10) return d + '0';  //0-9
    return d + 'A' - 10;         //a-z
}

long long aToD(string num, int base){
    long long deval = 0;
    for (char c : num){
        if (c >= 'A'){
            deval = deval * base + (c - 'A' + 10);
        }else{
            deval = deval * base + (c - '0');
        }
    }

    return deval;

}

void dToB(long long d, int base) {
    if (d < base) {
        cout << toChar(d);
        return;
    }
    dToB(d / base, base);
    cout << toChar(d % base);
}

int main() {
    while (cin >> A >> S >> B && A) {  
        long long deval = aToD(S, A);
        dToB(deval, B);
        cout << '\n';
    }

    return 0;
}