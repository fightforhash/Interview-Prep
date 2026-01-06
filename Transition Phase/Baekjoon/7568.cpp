#include <iostream>
#include <vector>
using namespace std;

struct Person {
    int weight, height;
};

int main(){

    int n;
    cin >> n;
    vector<Person> people(n);
    for (int i = 0; i < n; ++i) {
        cin >> people[i].weight >> people[i].height;
    }
    
    for (int i = 0; i < n; i++){
        int rnk = 1;
        for (int j = 0; j < n; j++){
            if (i == j) continue;
            if (people[j].weight > people[i].weight && people[j].height > people[i].height){
                rnk++;
            }
        }
        cout << rnk << " "; 
    }
    
    return 0;
}