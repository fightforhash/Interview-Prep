#include <iostream>
#include <string>

using namespace std;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    long long N;
    cin >> N;

    string baseRow;
    cin >> baseRow;

    long long marble = 0; 

    long long cl = 0;  

    for (long long i = 0; i < N; i++) {
        if (baseRow[i] == '1') {
            cl++;   
        } else {
            if (cl > 0) {
                marble += (cl * (cl + 1)) / 2;
                cl = 0;  
            }
        }
    }

    if (cl > 0) {
        marble += (cl * (cl + 1)) / 2;
    }

    cout << marble << '\n';
    return 0;
}