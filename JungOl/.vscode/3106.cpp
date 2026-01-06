#include <iostream>
using namespace std;

using ll = long long;

ll ato10(int a, string x){
    vector<ll> d(x.size()), A(x.size());
    for (int i = 0; i < x.size(); i++){
        if (x[i] >= '0' && x[i] <= '9'){
            d[i] = x[i] - '0';
        }
        else if (x[i] >= 'A' && x[i] <= 'Z'){
            d[i] = x[i] - '0' + 10;
            
        }
    }

    for (int i = 0; i < A.size(); i++){
        if (i == 0){
            A[0] = 1;
        }else{
            A[i] = A[i - 1] * a;
        }
    }
    long long result = 0;

    for (int i = 0; i < A.size(); i++){
        int j = int(A.size()) - i - 1;
        result += d[i] * A[j];    
    }
    return result;
}

string tentob(ll a, ll b){

    




}


int main(){
    cin.tie(0) -> sync_with_stdio(0);

    int a,b;
    string s;

    while(true){
            
        cin >> a;
        if (a == 0){
            break;
        }
        
        cin >> s >> b;
    }


}