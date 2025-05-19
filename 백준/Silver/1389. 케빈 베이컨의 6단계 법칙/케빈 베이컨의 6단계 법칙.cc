#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;

int N, M;
vector<int> vec[101];

int BFS(int start, int end) {
    queue<pair<int, int> > q;
    bool visited[101] = { false };

    q.push(make_pair(start, 0));
    visited[start] = true;

    while (!q.empty()) {
        int current = q.front().first;
        int depth = q.front().second;
        q.pop();

        if (current == end) return depth;

        for (int i = 0; i < vec[current].size(); i++) {
            int next = vec[current][i];
            if (!visited[next]) {
                visited[next] = true;
                q.push(make_pair(next, depth + 1));
            }
        }
    }
    return 0;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    cin >> N >> M;
    for (int i = 0; i < M; i++) {
        int A, B;
        cin >> A >> B;
        vec[A].push_back(B);
        vec[B].push_back(A);
    }

    int minTotal = 987654321;
    int answer = 0;

    for (int i = 1; i <= N; i++) {
        int totalDist = 0;
        for (int j = 1; j <= N; j++) {
            if (i != j) {
                totalDist += BFS(i, j);
            }
        }

        if (totalDist < minTotal) {
            minTotal = totalDist;
            answer = i;
        }
    }

    cout << answer;
    return 0;
}
