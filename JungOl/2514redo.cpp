#include <iostream>
using namespace std;

int main(){

    string s;
    cin >> s;
    string ioi = "IOI";
    int icount = 0;
    string koi = "KOI";
    int kcount = 0;

    for (int i = 0; i < s.size(); i++){
        string sub = s.substr(i, 3);
        if (sub == ioi){
            icount++;
        }else if (sub == koi){
            kcount++;
        }    
    }
    
    cout << kcount << '\n' << icount;

}

/*
if (s1.find(s2) != std::string::npos) {
    std::cout << "found!" << '\n';
}
*/