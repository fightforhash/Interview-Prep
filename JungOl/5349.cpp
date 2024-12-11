#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main() {
    string input;
    getline(cin, input);  

    istringstream iss(input);  
    vector<string> words;
    string word;

    int index = 1; 
    while (iss >> word) {
        if (index % 2 == 0) {
            words.push_back(word);  
        }
        index++;
    }

    for (int i = words.size() - 1; i >= 0; --i) {
        cout << words[i];
        if (i > 0) cout << " "; 
    }
    cout << endl;
    return 0;
}