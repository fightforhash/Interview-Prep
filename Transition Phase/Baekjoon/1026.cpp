#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    int n;
    cin >> n;
    vector<int> A(n), B(n);
    
    for (int i = 0; i < n; i++){
        cin >> A[i];
    }

    for (int i = 0; i < n; i++){
        cin >> B[i];
    }
    

    sort(A.begin(), A.end());

    sort(B.begin(), B.end(), greater<int>());

    int s = 0; 

    for (int i = 0; i < n; i++){
        s += A[i] * B[i];
    }


    cout << s << '\n';

    return 0;


}