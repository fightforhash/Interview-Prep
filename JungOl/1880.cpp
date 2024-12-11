#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string key, password;
    cin >> key;          
    cin.ignore();        
    getline(cin, password); 

    string alpha = "abcdefghijklmnopqrstuvwxyz";

    string answer = "";

    for (int i = 0; i < password.size(); i++) {
        if (password[i] == ' ') { 
            answer += ' ';
        } else {
            if (isupper(password[i])) { 
                for (int j = 0; j < alpha.size(); j++) {
                    if (tolower(password[i]) == alpha[j]) {
                        answer += toupper(key[j]);
                        break;
                    }
                }
            } else { 
                for (int k = 0; k < alpha.size(); k++) {
                    if (password[i] == alpha[k]) {
                        answer += key[k];
                        break;
                    }
                }
            }
        }
    }

    cout << answer << endl; 

    return 0;
}
