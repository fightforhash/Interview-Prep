#include <iostream>
using namespace std;

bool busy[1320];

int hourtomin(int hour, int min){
    return (hour * 60) + min;
}

void findMeanTime(string starttime, string endtime){

    int startHour = stoi(starttime.substr(0, 2));
    int startMin = stoi(starttime.substr(2, 2));

    int minstart = hourtomin(startHour, startMin);
    minstart -= 10;

    int endHour = stoi(endtime.substr(0, 2));
    int endMin = stoi(endtime.substr(2, 2));

    int minend = hourtomin(endHour, endMin);
    minend += 10;

    for(int i = minstart; i < minend; i++){
        busy[i] = true;
    }
}

int main(){
    cin.tie(0) -> sync_with_stdio(0);
    int t;
    cin >> t;

    string starttime, endtime;

    for (int i = 1; i <= t; i++){
        cin >> starttime;
        cin >> endtime;
        findMeanTime(starttime, endtime);
    }

    int longest = 0;
    for (int i = 10 * 60; i < 22 * 60; i++){

        if (busy[i] == false){
            int current = 0;
            for (int j = i; j < 22 * 60; j++){
                if (busy[j] == true) break;
                current += 1;
            }
            longest = max(current, longest);
        }
    }

    cout << longest;

}