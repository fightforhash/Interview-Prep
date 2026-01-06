#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


bool is_valid_size(int x, int n, int m, const vector<string>& grid, int i, int j) {
    if (i - x < 0 || i + x >= n || j - x < 0 || j + x >= m) {
        return false;
    }
    
    for (int k = 1; k <= x; ++k) {
        // Check vertical | up and down
        if (grid[i - k][j] != '|' || grid[i + k][j] != '|') {
            return false;
        }
        // Check horizontal - left and right
        if (grid[i][j - k] != '-' || grid[i][j + k] != '-') {
            return false;
        }
        // Check diagonal \ upper left and lower right
        if (grid[i - k][j - k] != '\\' || grid[i + k][j + k] != '\\') {
            return false;
        }
        // Check diagonal / upper right and lower left
        if (grid[i - k][j + k] != '/' || grid[i + k][j - k] != '/') {
            return false;
        }
    }
    return true;
}

int find_largest_snowflake(int n, int m, const vector<string>& grid) {
    int max_size = 0;
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (grid[i][j] == '+') {
                int size = 0;
                while (is_valid_size(size + 1, n, m, grid, i, j)) {
                    size++;
                }
                max_size = max(max_size, size);
            }
        }
    }
    
    return max_size;
}

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    int n, m;
    cin >> n >> m;
    vector<string> grid(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> grid[i];
    }

    int result = find_largest_snowflake(n, m, grid);
    
    cout << result << endl;

    return 0;
}
