#include <iostream>
#include <vector>
using namespace std;
int a,b;
vector<int> comb;
bool nc(vector<int>& cr, int n, int k){
    int i = k - 1;
    while (i >= 0 && cr[i] == n + i - k + 1) i--;

    if (i < 0) return false;
    cr[i]++;
    for(int j = i + 1; j < k; j++) cr[j] = cr[j - 1] + 1;
    return true;
}

int main(){

    cin >> a >> b;
    comb.resize(b);
    for (int i = 0; i < b; i++) cin >> comb[i];

    if (nc(comb, a, b)){
        for(int i = 0; i < b ; i++) cout << comb[i] << " ";
        cout << '\n';
    }else{
        cout << "NONE" << '\n';
    }

    return 0;
}