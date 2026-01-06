#include <iostream>
#include <vector>
#include <unordered_map>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //1
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    int mean = round(double(sum) / n);
    cout << mean << '\n';

    //2
    sort(arr.begin(), arr.end());
    int mid = n / 2;
    double median = (n % 2 == 0) ? (arr[mid - 1] + arr[mid]) / 2.0 : arr[mid];
    cout << median << '\n';

    //3
    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
    int maxFreq = 0;
    vector<int> modes;
    for (auto& pair : freq) {
        if (pair.second > maxFreq) {
            maxFreq = pair.second;
            modes.clear(); // 새로운 최빈값이 나오면 초기화
            modes.push_back(pair.first);
        } else if (pair.second == maxFreq) {
            modes.push_back(pair.first);
        }
    }

    // 최빈값 중 두 번째로 작은 값 찾기
    sort(modes.begin(), modes.end()); // 오름차순 정렬
    if (modes.size() > 1) {
        cout << modes[1] << '\n'; // 두 번째로 작은 최빈값 출력
    } else {
        cout << modes[0] << '\n'; // 최빈값이 하나뿐이면 출력
    }

    //4
    int range = arr[n - 1] - arr[0];
    cout << range << '\n';

    return 0;
}