#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    string ans;
    int ansnum;

    int curtime = 1;
    int direction = 1;

    for (int i = 0; i < n; i++){

        string s;
        cin >> s;
        int num;
        cin >> num;
        
        bool isHour = (s == "HOURGLASS");
        bool isSync = (curtime == num);
        bool overload = isHour && isSync;

        if (isHour && !overload){
            direction *= -1;
        }

        cout << curtime << " " << (isSync && !overload ? "YES" : "NO") << '\n';

        curtime += direction;
        if (curtime == 13) curtime = 1;
        if (curtime == 0) curtime = 12;

    }

}