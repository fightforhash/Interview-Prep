#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
using namespace std;

int main(){
    stack<int> s;
    int n;
    cin >> n;

    while (n--){
        char c;
        cin >> c;
        
        if (c == 'i'){
            int a;
            cin >> a;
            s.push(a);
        }

        if (c == 'o'){
            if (s.empty()){
                cout << "empty" << '\n'; //single quote 이상한 큰정수 뽑아냄 double quote 정상출력
            }else{
            int p = s.top();
            s.pop();
            cout << p << '\n'; 
            }
        }
        if (c == 'c'){
            cout << s.size() << '\n';
        }

        }

        return 0;
}





