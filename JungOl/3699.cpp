#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int TC;
    cin >> TC;

    while (TC--) {
        int N;
        cin >> N;

        map<string, int> clothes; 

        for (int i = 0; i < N; ++i) {
            string name, category;
            cin >> name >> category;
            clothes[category]++;  
        }

        int combinations = 1;

        
        for (const auto& pair : clothes) {
            combinations *= (pair.second + 1);
        }

        cout << combinations - 1 << '\n';
    }

    return 0;
}