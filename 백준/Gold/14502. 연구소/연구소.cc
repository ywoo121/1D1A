#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int n, m;
vector<vector<int> > lab;

void bfs(vector<vector<int> > &visited) {
    queue<pair<int, int> > q;
    vector<int> dx = {1, -1, 0, 0};
    vector<int> dy = {0, 0, 1, -1};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (lab[i][j] == 2) {
                q.push({i, j});
                visited[i][j] = true;
            }
        }
    }
    while (!q.empty()) {
        auto [x, y] = q.front(); q.pop();
        for (int d = 0; d < 4; d++) {
            int nx = x + dx[d];
            int ny = y + dy[d];
            if (nx >= 0 && ny >= 0 && nx < n && ny < m && !visited[nx][ny] && lab[nx][ny] == 0) {
                visited[nx][ny] = true;
                q.push({nx, ny});
            }
        }
    }
}

int get_safe_area() {
    vector<vector<int>> visited(n, vector<int>(m, false));
    bfs(visited);
    int safe_area = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (lab[i][j] == 0 && !visited[i][j]) {
                safe_area++;
            }
        }
    }
    return safe_area;
}

int main() {
    cin >> n >> m;
    lab.resize(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> lab[i][j];
        }
    }
    int max_area = 0;
    vector<pair<int, int>> empty_spaces;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (lab[i][j] == 0) {
                empty_spaces.push_back({i, j});
            }
        }
    }
    int size = empty_spaces.size();
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            for (int k = j + 1; k < size; k++) {
                auto [x1, y1] = empty_spaces[i];
                auto [x2, y2] = empty_spaces[j];
                auto [x3, y3] = empty_spaces[k];
                lab[x1][y1] = lab[x2][y2] = lab[x3][y3] = 1;
                max_area = max(max_area, get_safe_area());
                lab[x1][y1] = lab[x2][y2] = lab[x3][y3] = 0;
            }
        }
    }
    cout << max_area << endl;
    return 0;
}