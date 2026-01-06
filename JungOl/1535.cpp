#include <iostream>
#include <string>
#include <sstream>
#include <vector> 
#include <algorithm>
using namespace std;

int main(){
    vector<string> wl;
    string i; 


    while (true){
        getline(cin, i);

        if(i == "END") break;

        istringstream iss(i);
        string word;

        while (iss >> word) {
            if (find(wl.begin(), wl.end(), word) == wl.end()) {
                wl.push_back(word);  
            }
        }

        for (const auto & w : wl){
            cout << w << " ";
        }
        cout << '\n';
    }
    
}