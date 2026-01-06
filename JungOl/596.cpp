#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){

    string s;
    int n;

    cin >> s >> n;

    if (n > s.size()){
        reverse(s.begin(), s.end());
        cout << s;
    }else{
        string r = s.substr(s.size() - n);
        reverse(r.begin(), r.end());
        cout << r;
    }
}