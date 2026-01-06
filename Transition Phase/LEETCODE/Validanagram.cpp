#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> b(26);
        vector<int> z(26);
        for (int i = 0; i < s.size(); i++){
            b[s[i] - 'a']++;
        }
        for (int j = 0; j < t.size(); j++){
            z[t[j] - 'a']++;
        }

        for (int i = 0; i < 26; i++){
            if (b[i] != z[i]){
                return false;
            }
        }
        return true;
    }
};

int main(){

    Solution solution;
    string s, t;
    cin >> s;
    cin >> t;

    bool result = solution.isAnagram(s, t);

    if (result) {  
        printf("T\n");
    } else {
        printf("F\n");
    }
}