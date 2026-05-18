#include <string>
#include <vector>
#define MOD 1000000007

using namespace std;

int solution(int m, int n, vector<vector<int>> puddles) {
    int answer = 0;

    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    vector<vector<bool>> blocked(n + 1, vector<bool>(m + 1, false));

    // 웅덩이 표시
    for (auto puddle : puddles) {
        int x = puddle[0];
        int y = puddle[1];

        blocked[y][x] = true;
    }

    // 시작점
    dp[1][1] = 1;

    for (int y = 1; y <= n; y++) {
        for (int x = 1; x <= m; x++) {

            // 시작점은 제외
            if (x == 1 && y == 1) {
                continue;
            }

            // 웅덩이면 이동 불가
            if (blocked[y][x]) {
                dp[y][x] = 0;
                continue;
            }

            dp[y][x] =
                (dp[y - 1][x] + dp[y][x - 1]) % MOD;
        }
    }

    answer = dp[n][m];

    return answer;
}