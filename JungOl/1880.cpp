#include <iostream>
#include <string>
using namespace std;

int main(){
    string key, encryptedMessage;

    getline(cin, key);
    getline(cin, encryptedMessage);

    char decrypt[26];

    for (int i = 0; i < 26; i++){
        decrypt[i] = key[i];
    }

    for (char c: encryptedMessage){
        if (c >= 'a' && c <= 'z'){
            cout << decrypt[c - 'a'];
        }else if (c >= 'A' && c <= 'Z'){
            cout << char(decrypt[c - 'A'] - 'a' + 'A');
        }else {
            cout << c;
        }

    }

    cout << '\n';
    return 0; 

}