#include <iostream>
using namespace std;
int aarea;
int barea;
struct Rectangle{

    int width, height;
    bool operator<(Rectangle right){
        return aarea < barea;
    }
    
};

int main(){
    Rectangle a, b;

    cin >> a.width >> a.height;
    cin >> b.width >> b.height;

    aarea = a.width * a.height;
    barea = b.width * b.height;

    if (a<b) cout << "a is smaller" << "\n";
    else cout << "b is smaller" << "\n";

    return 0;
}