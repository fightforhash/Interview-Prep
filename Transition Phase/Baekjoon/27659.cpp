#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        while (cin.peek() == '\n') {
            cin.ignore();
        }

        int n, e;
        cin >> n >> e;

        vector<int> queue;
        for (int j = 1; j <= n; ++j) {
            queue.push_back(j);
        }

        for (int j = 0; j < e; ++j) {
            int person;
            cin >> person;

            // 해당 사람을 찾아서 맨 앞으로 이동
            auto it = find(queue.begin(), queue.end(), person);
            if (it != queue.end()) {
                queue.erase(it);
                queue.insert(queue.begin(), person);
            }
        }

        cout << queue.back() << endl;
    }

    return 0;
}