#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    
    int n;
    cin >> n;
    int numbers[1000];

    for (int i = 0; i < n; i++){
        cin >> numbers[i];
    }

    for (int i = 1; i < n; i++) {
        int j = i - 1;
        while (j >= 0 && numbers[j + 1] < numbers[j]) {
            int tmp = numbers[j + 1];
            numbers[j + 1] = numbers[j];
            numbers[j] = tmp;
            j--;
        }
    }

    for (int i = 0; i < n; i++){
        cout << numbers[i] << endl;
    }

}