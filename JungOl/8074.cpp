#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
struct xyz {
    int x;
    int y;
    int z;
};
int main(){
    queue<xyz> qq;
    int n;
    cin >> n;

    while (n--){
        char c;
        cin >> c;
        
        if (c == 'i'){
            int a, b, c; //for loop 실수
            cin >> a >> b >> c;
            qq.push({a,b,c});

        }

        if (c == 'o'){
            if (qq.empty()){
                cout << "empty" << "\n";
                
            }else{
            xyz h = qq.front();
            qq.pop();
            cout << h.x << " " <<  h.y << " " << h.z << '\n';

            }
        }
        if (c == 'c'){
            cout << qq.size() << '\n';
        }

        if (c == 'z'){
            int k;
            cin >> k;
            
            if (!qq.empty() && qq.front().z == k){
                cout << "yes" << "\n";
                
            }else {
                cout << "no" << '\n';
                
            }

        }


    }
    return 0;

}