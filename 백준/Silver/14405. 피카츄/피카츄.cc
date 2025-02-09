#include <iostream>
#include <string>

using namespace std;

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    string pi = "pi";
    string ka = "ka";
    string chu = "chu";

    bool appendable = false;
    string s;
    cin >> s;

    for (int i = 0; i < s.size();){
        int siz = 0;
        if (s.substr(i, 2) == pi || s.substr(i, 2) == ka){
            i += 2;
            appendable = true;
        }else if (s.substr(i, 3) == chu){
            i += 3;
            appendable = true;
        } else if (s.substr(i, 2) != pi || s.substr(i, 2) != ka || s.substr(i ,3) != chu){
            appendable = false;
            break;
        }
        
    }

    if (appendable) cout << "YES";
    else cout << "NO";
    
    return 0;

}