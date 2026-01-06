#include <iostream>
#include <vector>
using namespace std;
int N;

struct Person {
    string name;
    int age;
    int month;
    int year;
};

Person mostlessage(vector<Person> n){
    Person youngest = n[0];
    for (int i = 0; i < N; i++){
        if (n[i].year > youngest.year){
            youngest = n[i];
        }else if (n[i].year == youngest.year && n[i].month > youngest.month ){
            youngest = n[i];
        }else if (n[i].year == youngest.year && n[i].month  == youngest.month && n[i].age > youngest.age){
            youngest = n[i];
        }
    }
    

    return youngest;

}
Person mosteldest(vector<Person> n){
    Person youngest = n[0];
    for (int i = 0; i < N; i++){
        if (n[i].year < youngest.year){
            youngest = n[i];
        }else if (n[i].year == youngest.year && n[i].month < youngest.month ){
            youngest = n[i];
        }else if (n[i].year == youngest.year && n[i].month  == youngest.month && n[i].age < youngest.age){
            youngest = n[i];
        }
    }
    

    return youngest;

}
int main(){
    cin.tie(0) -> sync_with_stdio(0);

    cin >> N;
    vector<Person> people(N);

    for (int i = 0; i < N; i++) {
        cin >> people[i].name >> people[i].age >> people[i].month >> people[i].year;
    }

    Person youngest = mostlessage(people);
    Person eldest = mosteldest(people);
    
    cout << youngest.name << '\n' << eldest.name;

    return 0;


}