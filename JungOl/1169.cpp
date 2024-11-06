#include <iostream>
#include <vector>
using namespace std;
int n;
vector<int> vec;
bool checked[50];

void ass(int b){
    if (vec.size() == n){
        for (int i = 0; i < vec.size(); i++){
            cout << vec[i] << " ";
        }cout << '\n';
        return;
    }
    if (b == 1){
        for (int i = 1; i <= 6; i++){

            vec.push_back(i);
            ass(b);       
            vec.pop_back();     
        }
    }
    else if (b == 2){
        for (int i = 1; i <= 6; i++){
            if(vec.empty() || vec.back() <= i){ 
                vec.push_back(i);
                ass(b);
                vec.pop_back();
            }
            
        }
    }
    else if (b == 3){
        for (int i = 1; i <= 6; i++){
            if (!checked[i]){
                checked[i] = true;
                vec.push_back(i);
                ass(b);
                vec.pop_back();
                checked[i] = false;
            }

        }
    }



}

int main(){

    int m;

    cin >> n >>m;

    ass(m);
    return 0;




}