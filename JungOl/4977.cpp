#include <iostream>
#include <string>
using namespace std;

string inttobi(int i){

    string res = "";

    if (i == 0) return "0";

    while (i > 0){
        res = to_string(i % 2) + res;
        i /= 2;
    }
    return res;
}

string fractobi(double f){
    string res = "";
    for (int i = 0; i < 4; i++){
        f *= 2;
        int bit = static_cast<int>(f);
        res += to_string(bit);
        f -= bit;
        if (f == 0) break;
    }
    while (res.length() < 4) res += "0";
    return res;

}
int main(){

    double n;
    cin >> n;

    int ip = static_cast<int>(n);
    double fp = n - ip;

    string biint = inttobi(ip);
    string bifrac = fractobi(fp);

    cout << biint << "." << bifrac << '\n';



}