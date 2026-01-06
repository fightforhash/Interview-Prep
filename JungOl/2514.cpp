#include <iostream>
#include <string>
using namespace std;

int main(){

    string ioi = "IOI";
    string koi = "KOI";
    int icount = 0;
    int kcount = 0;
    
    string s;

    cin >> s;

    size_t pos = s.find(koi);
    while (pos != string::npos) {
        kcount++;
        pos = s.find(koi, pos + 1);  
    }

    
    pos = s.find(ioi);
    while (pos != string::npos) {
        icount++;
        pos = s.find(ioi, pos + 1);  
    }

    cout << kcount << '\n' << icount << endl;

}