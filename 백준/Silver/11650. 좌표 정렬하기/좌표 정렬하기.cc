#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct xy{
    int x;
    int y;
};
    
bool compare(xy a, xy b){
    if (a.x < b.x){
        return true;
    }else if (a.x == b.x){
        if (a.y < b.y){
            return true;
        }
    }
    return false;
}

int main(){

    int n;
    cin >> n;
    vector<xy> coord(n);
    for (int i = 0; i < n; i++){
        cin >> coord[i].x >> coord[i].y;
    }

    for (int i = 0; i < n; i++){
        cin >> coord[i].x >> coord[i].y;
    }

    sort(coord.begin(), coord.end(), compare);

    for (int i = 0; i < n; i++){
        cout << coord[i].x << " " << coord[i].y << '\n';
    }


}