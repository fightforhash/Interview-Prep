#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

void parse_input(vector<char>& colors, vector<int>& numbers) {
    for (int i = 0; i < 5; ++i) {
        char color;
        int number;
        cin >> color >> number;
        colors.push_back(color);
        numbers.push_back(number);
    }
}

int calculate_score(const vector<char>& colors, const vector<int>& numbers) {

    map<int, int> number_count;
    map<char, int> color_count;

    for (int num : numbers) number_count[num]++;
    for (char color : colors) color_count[color]++;

    vector<int> sorted_numbers = numbers;
    sort(sorted_numbers.begin(), sorted_numbers.end());
    int max_num = sorted_numbers.back();

    // 규칙 ①: 모두 같은 색이면서 숫자가 연속적일 때
    bool is_same_color = (color_count.size() == 1);
    bool is_consecutive = true;
    for (int i = 0; i < 4; ++i) {
        if (sorted_numbers[i] + 1 != sorted_numbers[i + 1]) {
            is_consecutive = false;
            break;
        }
    }
    if (is_same_color && is_consecutive) return 900 + max_num;

    // 규칙 ②: 4장의 숫자가 같을 때
    for (auto& entry : number_count) {
        if (entry.second == 4) return 800 + entry.first;
    }

    // 규칙 ③: 3장의 숫자가 같고 나머지 2장도 같은 숫자일 때
    if (number_count.size() == 2) {
        int three = 0, two = 0;
        for (auto& entry : number_count) {
            if (entry.second == 3) three = entry.first;
            if (entry.second == 2) two = entry.first;
        }
        if (three && two) return 700 + three * 10 + two;
    }

    // 규칙 ④: 모두 같은 색일 때
    if (is_same_color) return 600 + max_num;

    // 규칙 ⑤: 숫자가 연속적일 때
    if (is_consecutive) return 500 + max_num;

    // 규칙 ⑥: 3장의 숫자가 같을 때
    for (auto& entry : number_count) {
        if (entry.second == 3) return 400 + entry.first;
    }

    // 규칙 ⑦: 2장의 숫자가 같고 또 다른 2장의 숫자도 같을 때
    if (number_count.size() == 3) {
        vector<int> pairs;
        for (auto& entry : number_count) {
            if (entry.second == 2) pairs.push_back(entry.first);
        }
        if (pairs.size() == 2) {
            int bigger = max(pairs[0], pairs[1]);
            int smaller = min(pairs[0], pairs[1]);
            return 300 + bigger * 10 + smaller;
        }
    }

    // 규칙 ⑧: 2장의 숫자가 같을 때
    for (auto& entry : number_count) {
        if (entry.second == 2) return 200 + entry.first;
    }

    // 규칙 ⑨: 위의 규칙에 해당하지 않을 때
    return 100 + max_num;
}

int main() {
    vector<char> colors;
    vector<int> numbers;

    
    parse_input(colors, numbers);

    int score = calculate_score(colors, numbers);
    cout << score << endl;

    return 0;
}