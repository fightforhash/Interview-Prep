#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

long long reverse(string x){

    reverse(x.begin(), x.end());

    long long res = stoll(x);
    
    return res;

}

//string reverse -> vector<long long>
//long long reverse -> vector<string>

int main(){

    int n;
    cin >> n;
    vector<long long> s;
    
    for(int i = 0; i < n; i++){
        string si;
        cin >> si;
        s.push_back(reverse(si));
    }

    sort(s.begin(), s.end());

    for (auto star : s){
        cout << star << '\n';
    }


}