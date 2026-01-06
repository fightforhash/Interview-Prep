#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    cin.tie(0) -> sync_with_stdio(0);

    int x, y, n;
    cin >> x >> y >> n;

    vector<int> hori  = {0, y};
    vector<int> verti = {0, x};

    for (int i = 0; i < n; i++){

        int direction;
        int dot;
        cin >> direction >> dot;

        if (direction == 0){
            hori.push_back(dot);
        }else{
            verti.push_back(dot);
        }
    }
    
    sort(hori.begin(), hori.end());
    sort(verti.begin(), verti.end());

    int maxh = 0; int maxw = 0;

    for (int i = 1; i < hori.size(); i++){
        maxh = max(maxh, hori[i] - hori[i - 1]);
    }
    for (int i = 1; i < verti.size(); i++){
        maxw = max(maxw, verti[i] - verti[i - 1]);
    }    

    int ans = maxh * maxw;

    cout << ans; 

}