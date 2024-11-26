#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    int n, x;
    

    cin >> n >> x;
    vector<int> arr(n,x);
    char c;
    while (true){
        cin >> c;

        if (c == 'i'){
            int a;
            cin >> a;
            arr.push_back(a);
        }
        else if (c == 'r'){
            if (arr.size() == 0){
                continue;
            }
            arr.pop_back();
        }
        else if (c == 's'){
            sort(arr.begin(), arr.end());
        }
        else if (c == 't'){
            if (arr.size() >= 2) {
                swap(arr.front(), arr.back());
        }
        }
        else if (c == 'e'){
            break;
        }
    }
    for (int c : arr){
        cout << c << " "; 
    }
    return 0; 
}