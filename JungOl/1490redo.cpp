#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> c(K);

    for (int i = 0; i < K; i++){
        cin >> c[i];
    }

    for (int i = K - 1; i >= 0; i--){
        if (c[i] < N - (K - 1 - i)){
            c[i]++;
        for (int j = i + 1; j < K; j++){
            c[j] = c[j - 1] + 1;
        }
        

        for (int i = 0; i < K; i++) {
                cout << c[i] << " ";
            }
        cout << endl;
        return 0;
        }
    }
    cout << "NONE";
    return 0;
}