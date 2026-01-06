#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int n;

bool compareStrings(string a, string b) {
    if (a.size() != b.size())
        return a.size() < b.size();
    return a < b;
}

int main(){

    
    cin >> n;
    vector<string> arr(n);

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    set<string> uniqueWords(arr.begin(), arr.end());
    arr.assign(uniqueWords.begin(), uniqueWords.end());

    sort(arr.begin(), arr.end(), compareStrings);

    for (auto i : arr){
        cout << i << '\n'; 
    }

}