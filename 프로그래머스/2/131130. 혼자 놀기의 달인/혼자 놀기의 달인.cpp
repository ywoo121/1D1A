#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> cards) {
    int n = cards.size();
    vector<bool> visited(n, false);
    vector<int> group;

    for (int i = 0; i < n; i++) {
        if (visited[i]) continue;

        int cnt = 0;
        int cur = i;

        while (!visited[cur]) {
            visited[cur] = true;
            cnt++;
            cur = cards[cur] - 1; 
        }

        group.push_back(cnt);
    }

    if (group.size() < 2) return 0;

    sort(group.begin(), group.end(), greater<int>());

    return group[0] * group[1];
}