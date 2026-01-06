#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    map<string, int> cnt;
    vector<string> order;
    while (true){
        string s;
        
        getline(cin, s);
        if (s == "END"){
            break;
        }
        /*
        cout << "\"";
        cout << s;
        cout << "\"";
        */
        s += " ";
        for (int i = 0; i < s.size(); i++){ //2차원으로 간편화 및 로직 오류 수정 줄별로 결과기록이 안되는 문제.
            string ans;
            if (s[i] != ' '){
                for (int j = i; j < s.size(); j++){
                    if (s[j] == ' ' || s[j] == '\n'){
                        i = j;
                        break;
                    }
                    ans += s[j];
                }
                cnt[ans]++;
            }
        
            if (s[i] == '\n' || i == s.size() - 1){
                for (auto [key, val] : cnt){
                    cout << key << " : " << val << '\n';
                }
                cnt.clear();
                
            }
        }

//I AM DOG DOG DOG DOG A AM I
//0123456

}
    return 0;
}



    



