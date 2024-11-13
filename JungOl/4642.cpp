#include <iostream>
#include <algorithm>
#include <vector>
#include <string.h>
using namespace std;

typedef long long ll;
ll n;
struct student{
    char name[1000];
    int score;
};
bool operator<(const student l, const student r){
    if (l.score == r.score) return strcmp(l.name, r.name) < 0;
    
    return l.score > r.score;
}
int main(){
    
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n;
    vector<student> stu(n);

    for (int i = 0; i < n; i++){
        cin >> stu[i].name >> stu[i].score;
    }

    sort(stu.begin(), stu.end());

    for (int i = 0; i < n; i++){
        cout <<  stu[i].name << " " << stu[i].score <<'\n';
    }

    return 0;
}