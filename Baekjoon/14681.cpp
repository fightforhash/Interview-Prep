#include <iostream>
using namespace std;

int main(){
  
   int a;
   int b;

   cin >> a;
   cin >> b;

  if (a > 0 && b > 0){ 
    cout<< 1 << endl;
}
  else if (a < 0 && b < 0){
    cout << 3 << endl;
  }
  
  else if (a > 0 && b < 0){
    cout << 4 << endl;
  }
  
  else if (a < 0 && b > 0){

    cout << 2 << endl;

  }

}
