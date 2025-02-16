#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int n, k;

struct Country{
    int number;
    int gold;
    int silver;
    int bronze;

};

bool compare(Country a, Country b) {
    if (a.gold != b.gold) return a.gold > b.gold;
    if (a.silver != b.silver) return a.silver > b.silver;
    return a.bronze > b.bronze;
}

int main(){

    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> k;

    vector<Country> cty(n);
    for (int i = 0; i < n; i++){
        cty[i].number = i + 1;
        cin >> cty[i].gold >> cty[i].silver >> cty[i].bronze;
    }

    sort(cty.begin(), cty.end(), compare);

    int rank = 0; 
    for (int i = 0; i < n; ++i) {
        if (i > 0 && cty[i].gold == cty[i - 1].gold &&
            cty[i].silver == cty[i - 1].silver &&
            cty[i].bronze == cty[i - 1].bronze) {
            continue;
        }else{
            rank = i + 1;
        }
        if (cty[i].number == k) {
            cout << rank << endl;
            break;
        }
        
    }
}