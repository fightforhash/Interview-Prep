#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <string>
using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int np = 1;
    stack<int> s;
    string ops;

    for(int i = 0; i < n; i++){
        while (np <= arr[i]){
            s.push(np);
            ops += '+';
            np += 1;
        }
        
        if (!s.empty() && s.top() == arr[i]){
            s.pop();
            ops += '-';
        }else{
            cout << "NO\n";
            return 0;
        }
    }


    for (auto c: ops){
        cout << c << '\n';
    }

}