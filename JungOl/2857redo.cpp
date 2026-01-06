#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char arr[30][30];
    memset(arr, ' ', sizeof(arr));
    for (int i = 0; i < 5; i++) { 
        string word;
        cin >> word;
        for (int j = 0; j < word.size(); j++) { 
            arr[i][j] = word[j];
        }
    }

    for (int j = 0; j < 15; j++){
        for (int i = 0; i < 5; i++){
            if (arr[i][j] != ' '){
                cout << arr[i][j];
            }
        }
    }
}