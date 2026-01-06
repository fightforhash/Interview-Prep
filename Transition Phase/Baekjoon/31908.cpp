#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    int n;
    cin >> n;

    unordered_map<string, vector<string> > ring_map;

    for (int i = 0; i < n; i++){
        string name, ring; 
        cin >> name >> ring;

        if (ring != "-"){
            ring_map[ring].push_back(name);
        }
    }

    vector<pair<string, string> > couples;

    for (auto entry : ring_map){
        vector<string> names = entry.second;
        if (names.size() == 2){
            for (int i = 0; i < names.size(); i++){
                for (int j = i + 1; j < names.size(); j++){
                    couples.push_back(pair<string, string>(names[i], names[j]));
                }
            }
        }
    }

    cout << couples.size() << '\n';
    
    for (int i = couples.size() - 1; i >= 0; i--) {
        cout << couples[i].first << " " << couples[i].second << '\n';
    }

}