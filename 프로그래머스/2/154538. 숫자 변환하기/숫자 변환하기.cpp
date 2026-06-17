#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int x, int y, int n) {
    vector<int> dist(y + 1, -1);
    queue<int> q;

    dist[y] = 0;
    q.push(y);

    while (!q.empty()) {
        int cur = q.front();
        q.pop();

        if (cur == x) return dist[cur];

        vector<int> nexts;

        if (cur - n >= x) nexts.push_back(cur - n);
        if (cur % 2 == 0 && cur / 2 >= x) nexts.push_back(cur / 2);
        if (cur % 3 == 0 && cur / 3 >= x) nexts.push_back(cur / 3);

        for (int nxt : nexts) {
            if (dist[nxt] == -1) {
                dist[nxt] = dist[cur] + 1;
                q.push(nxt);
            }
        }
    }

    return -1;
}