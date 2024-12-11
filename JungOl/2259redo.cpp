#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int chamwae(vector<pair<int, int>> edge, int p){

    int maxw = 0, maxh = 0,  maxwidx = -1, maxhidx = -1;

    for (int i =  0; i < 6; i++){

        if (edge[i].first == 1 || edge[i].first == 2){
            if (edge[i].second > maxw){
                maxw = edge[i].second;
                maxwidx = i;
            }
        }else if (edge[i].first == 3 || edge[i].first == 4){
            if (edge[i].second > maxh){
                maxh = edge[i].second;
                maxhidx = i;
            }
        }
    }

    int minwidx = (maxwidx + 3) % 6; 
    int minhidx = (maxhidx + 3) % 6; 

    int minw = edge[minwidx].second;
    int minh = edge[minhidx].second;

    int bigarea = maxw * maxh;
    int smallarea = minw * minh;

    int ans = (bigarea - smallarea) * p;

    return ans;

}

int main(){
    cin.tie(0) -> sync_with_stdio(0);

    vector<pair<int, int>> edges(6);
    int k;
    cin >> k;

    for (int i = 0; i < 6; i++){
        cin >> edges[i].first >> edges[i].second;
    }

    cout << chamwae(edges, k);

}