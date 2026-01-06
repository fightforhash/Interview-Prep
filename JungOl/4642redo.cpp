#include <iostream>
#include <algorithm>
#include <vector>
#include <string.h>
using namespace std;

struct Student{
    char name[101];
    int score;
};

bool compare(const Student &l, const Student &r){
    if (l.score == r.score){
        return strcmp(l.name , r.name) < 0;
    }else{
        return l.score > r.score;
    }
    
}

int main(){

    int n;
    cin >> n;
    vector<Student> s(n);

    for (int i = 0; i < n; i++){
        cin >> s[i].name;
        cin >> s[i].score;
    }

    sort(s.begin(), s.end(), compare);

    for (int i = 0; i < n; i++){
        cout << s[i].name << " " << s[i].score << '\n';
    }

    return 0;
}