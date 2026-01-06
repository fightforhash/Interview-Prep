#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    int n;
    cin >> n;

    while (n--) {
        int m;
        cin >> m;
        unordered_map<string, int> categories; 

        for (int i = 0; i < m; i++) {
            string item, category;
            cin >> item >> category;
            categories[category]++; 
        }

        int total = 1;
        for (auto& c : categories) {
            total *= (c.second + 1); 
        }

        cout << total - 1 << '\n'; 
    
    return 0;
}