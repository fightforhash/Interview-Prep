#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    
    
    int n;
    cin >> n;
    vector<string> answer(n);

    for (int i = 0; i < n; i++){
        cin >> answer[i];
    }

    sort(answer.begin(), answer.end());

    for (auto i : answer){
        cout << i << '\n';
    }


}