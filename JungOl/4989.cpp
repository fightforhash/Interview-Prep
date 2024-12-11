#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;

    unordered_map<int, int> ab;

    for (int i = 1; i <= n; i++){
        int x;
        cin >> x;
        ab[x]++;
    }
        
    vector<pair<int, int>> sortedData(ab.begin(), ab.end());

    sort(sortedData.begin(), sortedData.end());

    for (auto[key,val] : sortedData){
        cout << key <<  " : "  << val << '\n';

    }

}