#include <iostream>
#include <vector>
using namespace std;
int n;
vector<int> vec;
bool checked[50];
int m;

void ass(){
    if (vec.size() == n){
        int sum = 0;
        for (int i = 0; i < vec.size(); i++){
           sum += vec[i]; 
        } 
        if (sum != m){
            return ;
        }
        for (int i = 0; i < vec.size(); i++){
            
            cout << vec[i] << " ";
        }cout << '\n';
        return;
    }
    
    for (int i = 1; i <= 6; i++){

        vec.push_back(i);
        ass();       
        vec.pop_back();     
    }
    

}

int main(){

    cin >> n >> m;

    ass();
    return 0;




}