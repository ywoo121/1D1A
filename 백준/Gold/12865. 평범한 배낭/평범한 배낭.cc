#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<pair<int, int>> items(N);
    for (int i = 0; i < N; i++) {
        cin >> items[i].first >> items[i].second;
    }
    vector<int> dp(K + 1, 0);
    for (auto [w, v] : items) {
        for (int k = K; k >= w; k--) {
            dp[k] = max(dp[k], dp[k - w] + v);
        }
    }
    cout << dp[K] << endl;
    return 0;
}