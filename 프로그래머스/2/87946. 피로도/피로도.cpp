#include <string>
#include <vector>

using namespace std;

int answer = 0;

void dfs(int fatigue, vector<vector<int>>& dungeons, vector<bool>& visited, int count) {
    answer = max(answer, count);

    for (int i = 0; i < dungeons.size(); i++) {
        int required = dungeons[i][0];
        int cost = dungeons[i][1];

        if (!visited[i] && fatigue >= required) {
            visited[i] = true;
            dfs(fatigue - cost, dungeons, visited, count + 1);
            visited[i] = false;
        }
    }
}


int solution(int k, vector<vector<int>> dungeons) {
    vector<bool> visited(dungeons.size(), false);

    dfs(k, dungeons, visited, 0);

    return answer;
}