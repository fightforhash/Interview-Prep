#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<string> si;
bool exists(string w){

    for (auto i : w){
        for (auto j : si){
            if (w == j){
                return true;
            }
        }
    }
    return false;
}
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
    
    while (true){
        string v;
        getline(cin , v);
        
        if (v == "END"){
            break;
        }
        
        //s 를 공백 단위로 쪼개는 task V
        //si -> 공백 단위로 쪼개진 Word들(I,am,a) 
        
        vector<string> words = parse_by_spaces(v);

        for (auto word : words){
        if (!exists(word)){
            si.push_back(word);
        }
        }

        for (int i = 0; i < si.size(); i++){
            cout << si[i] << " ";
            

        }cout << '\n';
    }
}