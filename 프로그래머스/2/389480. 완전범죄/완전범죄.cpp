#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> info, int n, int m) {
    const int INF = 1e9;
    
    vector<int> dp(m, INF);
    dp[0] = 0;
    
    for (auto &v : info) {
        int a = v[0], b = v[1];
        vector<int> nxt(m, INF);
        
        for (int i = 0; i < m; i++) {
            if (dp[i] == INF) continue;
            
            // A 선택
            if (dp[i] + a < n)
                nxt[i] = min(nxt[i], dp[i] + a);
            
            // B 선택
            if (i + b < m)
                nxt[i + b] = min(nxt[i + b], dp[i]);
        }
        
        dp = nxt;
    }
    
    int ans = INF;
    for (int i = 0; i < m; i++)
        ans = min(ans, dp[i]);
    
    return ans == INF ? -1 : ans;
}