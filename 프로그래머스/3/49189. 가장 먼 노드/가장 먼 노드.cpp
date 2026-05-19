#include <string>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int solution(int n, vector<vector<int>> edge) {
    // 인접 그래프
    vector<vector<int>> graph(n + 1);

    // 양방향
    for (auto &e : edge) {
        int a = e[0];
        int b = e[1];

        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    // 최단거리 저장
    vector<int> dist(n + 1, -1);
    queue<int> q;

    dist[1] = 0;
    q.push(1);

    // BFS 탐색
    while (!q.empty()) {
        int cur = q.front();
        q.pop();

        for (int next : graph[cur]) {
            if (dist[next] == -1) {
                dist[next] = dist[cur] + 1;
                q.push(next);
            }
        }
    }

    // 먼 거리
    int maxDist = *max_element(dist.begin() + 1, dist.end());

    int answer = 0;
    
    // 먼 거리 노드 개수 세기
    for (int i = 1; i <= n; i++) {
        if (dist[i] == maxDist) {
            answer++;
        }
    }

    return answer;
}