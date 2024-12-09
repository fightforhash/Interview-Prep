#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int cardscore(vector<char> colors, vector<int> numbers){

    map<int, int> numc;
    map<char, int> colorc;

    for (int num : numbers) numc[num]++;
    for (char color : colors) colorc[color]++;

    vector<int> sortnum = numbers;
    sort(sortnum.begin(), sortnum.end());
    int maxnum = sortnum.back();

    //규칙 1
    bool issamec = (colorc.size() == 1);  
    bool isconsec = true;
    for (int i = 0; i < 4; i++){
        if (sortnum[i] + 1 != sortnum[i + 1]){
            isconsec = false;
            break;
        }
    }
    if (issamec && isconsec) return 900 + maxnum;

    //규칙 2
    for (pair i: numc){
        if (i.second == 4) return 800 + i.first;
    }
    //규칙 3
    if (numc.size() == 2){
        int three, two = 0;
        for (pair i : numc){
            if (i.second == 3) three = i.first;
            if (i.second == 2) two = i.first;
        }
        if (three && two) return 700 + three * 10 + two;         
    }
    //규칙 4
    if (issamec) return 600 + maxnum;

    //규칙 5
    if (isconsec) return 500 + maxnum;

    //규칙 6
    for (pair i: numc){
        if (i.second == 3){
            return 400 + i.first;
        }
    }

    //규칙 7
    if (numc.size() == 3){
        vector<int> pairs;
        for (pair i : numc){
            if (i.second == 2) pairs.push_back(i.first);
        }
        if (pairs.size() == 2){
            int bigger = max(pairs[0],pairs[1]);
            int smaller = min(pairs[0],pairs[1]);
            return 300 + bigger * 10 + smaller;
        }
    }

    //규칙 8
    for (auto& i : numc){
        if (i.second == 2) return 200 + i.first;    
    }

    //규칙 9
    return 100 + maxnum;

}

int main(){

    vector<char> colors;
    vector<int> numbers;

    for (int i = 0 ; i < 5; i++){
        char color;
        int num;
        cin >> color >> num;
        colors.push_back(color);
        numbers.push_back(num);
    }

    cout << cardscore(colors, numbers);


}