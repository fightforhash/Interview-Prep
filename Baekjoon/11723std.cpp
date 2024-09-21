#include <iostream>
#include <set>
using namespace std;

int n;
string s;
int z;
int res = 1e7;
std::set<int> set1;

int main(){ 
    cin.tie(0) -> sync_with_stdio(0);
    //참고자료 https://en.cppreference.com/w/cpp/container/set
    //https://www.geeksforgeeks.org/setclear-c-stl/
    //https://www.geeksforgeeks.org/cpp-stl-set-insertion-and-deletion/
    //https://stackoverflow.com/questions/1701067/how-to-check-that-an-element-is-in-a-stdset

    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> s;
    
    if (s == "all"){
        set1.clear();
        for (int i = 1; i <= 20; i++){
            set1.insert(i);
        }
    }
    else if (s == "empty"){
        set1.clear();
    } 

    else{
        cin >> z;
    if (s == "add"){
    if (set1.find(z) == set1.end()){
        set1.insert(z);
    }
    }
    else if (s == "remove"){
       if (set1.find(z) != set1.end()){
            set1.erase(z);
       } 
    }
    else if (s == "check"){
        if (set1.find(z) != set1.end()){
            cout << 1 << '\n';
        }else{
            cout << 0 << '\n';
        }
        
    }
    else if (s == "toggle"){
        if (set1.find(z) != set1.end()){
            set1.erase(z);
        }else{
            set1.insert(z);
        }
    }
    }
    }
}
