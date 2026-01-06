#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    int k,t;
    cin >> k;
    unordered_map<int,int> cardC;
    for (int i = 0; i < k; i++){
        int num;
        cin >> num;
        cardC[num]++;
    }
    
    cin >> t;
    for (int i = 0; i < t; i++){
        int num;
        cin >> num;
        cout << cardC[num] << ' ';
    }

    return 0;

}