#include <iostream>

using namespace std;

int gcd(int x, int y){
    
    if (x < y){
        swap(x, y);
    }
    if (y == 0){
        return x;
    }
    
    return gcd(x%y, y);
    
}
int lcm(int x, int y){

    return x * y / gcd(x, y);


}

int main(){
    int n;
    int g = 0;
    int l = 1;
    cin >> n;

    for (int i = 1; i <= n; i++){
        int a;
        cin >> a;
        g = gcd(g, a);
        l = lcm(l, a);
    }

    cout << g << " " << l;

}