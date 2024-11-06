#include <iostream>
using namespace std;

int S[13];          
int combination[6]; 
int K;              

void generateCombinations(int index, int depth) {
    if (depth == 6) {
        for (int i = 0; i < 6; i++) {
            cout << combination[i];
            if (i != 5) cout << " ";
        }
        cout << endl;
        return;
    }

    
    for (int i = index; i < K; i++) {
        combination[depth] = S[i];
        generateCombinations(i + 1, depth + 1);
    }
}

int main() {
   
    cin >> K;
    for (int i = 0; i < K; i++) {
        cin >> S[i];
    }

    
    generateCombinations(0, 0);

    return 0;
}