#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <cmath>
#include <iomanip>
using namespace std;

vector<string> parse_by_spaces(const string &s) {
    // s = "I am a boy"
    // res = ["I", "am", "a", "boy"]
    vector<string> res;
    string word;
    for (char c: s){
        if (c == ' '){
            if (!word.empty()){
                res.push_back(word);
                word.clear();
            }
        }else{
            word += c;
        }
    }

    if (!word.empty()){
        res.push_back(word);
    }

    return res;
}

int main(){

    string height;
    string weight;
    string name;

    getline(cin, height);
    getline(cin, weight);
    getline(cin, name);

    vector<string> ans1 = parse_by_spaces(height);
    vector<string> ans2 = parse_by_spaces(weight);
    vector<string> ans3 = parse_by_spaces(name);

    cout << "키 = " << ans1.back() << '\n';
    cout << fixed << setprecision(1) << "몸무게 = " << stod(ans2.back()) << '\n';
    cout << "이름 = " << ans3.back();


    return 0;

}