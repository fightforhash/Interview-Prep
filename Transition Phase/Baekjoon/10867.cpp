#include <iostream>
#include <vector>  
#include <set>
#include <algorithm>
using namespace std;

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    int n;
    cin >> n;
    vector<int> arr(n);
    set<int> res;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());


    for (int i = 0; i < n; i++){
        res.insert(arr[i]);
    }

    for (auto c : res){
        cout << c << " ";
    }

}