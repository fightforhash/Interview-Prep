#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main(){

    int n;
    cin >> n;
    

    while (n--){
        queue<int> q;
        int paper;
        int order;
        
        cin >> paper >> order;
        vector<int> v(paper);

        for (int i = 0; i < paper; i++){
            cin >> v[i];
        }
        int target = v[order];
        
        for (int i = 0; i < paper; i++){
            q.push(i);
        }

        for (int i = 1; i <= paper; i++){
            int maxi = 0;
            for (int j = 0; j < paper; j++){
                if (v[j] > maxi){
                    maxi = v[j];
                }
            }for (int j = 0; j < paper; j++){
                if (v[q.front()] == maxi){
                    if(q.front() == order){
                        cout << i << '\n';
                    }
                    v[q.front()] = 0; 
                    q.pop();
                    break;
                }
                q.push(q.front());
                q.pop();
            }
        }

    }

}