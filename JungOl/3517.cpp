#include <iostream>
#include <vector>
using namespace std;

int BS(vector<int> arr, int low, int high, int target){
    while (low <= high){
        
    int mid = (low + high) / 2;

    if (arr[mid] == target){
        return mid;
    }else if (arr[mid] > target){
        high = mid - 1;
    }else {
        low = mid + 1;
    }
    }
    return -1;
}

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < a.size(); i++){
        cin >> a[i];
    }

    int q;
    cin >> q;

    vector<int> b(q);

    for (int i = 0; i < b.size(); i++){
        cin >> b[i];
    }

    vector<int> res(q);

    for (int i = 0; i < q; i++){
        res[i] = BS(a, 0, a.size()-1, b[i]);
    }

    for (int i = 0; i < q; i++){
        cout << res[i] << " ";
    }

    return 0;


}