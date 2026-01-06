#include <iostream>
#include <map>
#include <algorithm>
#include <string>
using namespace std;

struct Person {
    int age;
    string name;
    int order; 
};

bool compare(Person a, Person b){

    if (a.age != b.age){
        return a.age < b.age;
    } else{
        return a.order < b.order;
    }

}
int main(){
    int n;
    cin >> n;

    vector<Person> P;

    for (int i = 0; i < n; i++){
        int age;
        string name;
        cin >> age >> name;
        P.push_back({age, name, i});
    }

    sort(P.begin(), P.end(), compare);

    for (auto J : P){

        cout << J.age << " " << J.name << '\n';

    }

}

