#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool check(string str){
    stack<char> tack;
    int len = str.length();

    for (int i = 0; i < len; i++){
        if (str[i] == '(')
            tack.push(str[i]);
        else{
            if (!tack.empty())
                tack.pop();
            else
                return 0;
        }
    }
    if (!tack.empty())
        return 0;
    else
        return 1;
}

int main() {

    int t;
    cin >> t;

    for (int i =0; i < t; i++){
        string vpx;
        cin >> vpx;

        if (check(vpx))
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";

    }
}