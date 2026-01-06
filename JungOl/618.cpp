#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;
struct Person {
    string name;
    int height;
    double weight;

    friend istream& operator>>(istream& input, Person& p) {
    input >> p.name >> p.height >> p.weight;
    return input;
    }

};

bool compareByName(const Person& a, const Person& b) {
    return a.name < b.name;
}

bool compareByWeight(const Person& a, const Person& b) {
    return a.weight > b.weight;
}

int main(){
    Person people[5];

    for (int i = 0; i < 5; i++){
        cin >> people[i];
    }
    sort(people, people + 5, compareByName);
    cout << "name" << '\n';
    for (int i = 0; i < 5; i++){
        cout << people[i].name << " " << people[i].height << " " << fixed << setprecision(1) << people[i].weight << '\n';
    }
    sort(people, people + 5, compareByWeight);
    cout << '\n';
    cout << "weight" << '\n';
    for (int i = 0; i < 5; i++){
        cout << people[i].name << " " << people[i].height << " " << fixed << setprecision(1) << people[i].weight << '\n';
    }

}