#include <iostream>
#include <vector>
using namespace std;

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    vector<string> arr = {"c=", "c-", "dz=", "d-" , "lj", "nj", "s=", "z="};

    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++){
        bool found = false;

        for (string str : arr){
            if (s.substr(i, str.size()) == str){
                i += str.size() - 1;
                found = true;
                cnt++;
                break;
            }
        }
        //if (!found){
            //cnt++;
        //}
       
    }

    cout << cnt;


}