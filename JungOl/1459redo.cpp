#include <iostream>
#include <vector>
using namespace std;
int n;
const int m = 103;
bool visited[m];
int b[m];

bool valid(int start, int current){
    if (visited[current]) return start == current;
    visited[current] = true;
    return valid(start, b[current]);
}

int main(){
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> b[i];
    }
    vector<int> p;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j<=n; j++) visited[j] = false;
            if (valid(i,i)) p.push_back(i);
    }

    cout << p.size() << '\n'; 
    for (int e : p){
        cout << e << '\n';
    }

}