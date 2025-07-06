#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int N; cin >> N;

    vector<int> L(N); 
    vector<int> J(N); 

    // 입력받기
    for (int i = 0; i < N; ++i) cin >> L[i];
    for (int i = 0; i < N; ++i) cin >> J[i];

    vector<int> dp(101, 0); 

    for (int i = 0; i < N; ++i) {
        for (int j = 100; j >= L[i]; --j) {
            dp[j] = max(dp[j], dp[j - L[i]] + J[i]);
        }
    }

    int maxJoy = 0;
    for (int i = 1; i < 100; ++i) {
        maxJoy = max(maxJoy, dp[i]);
    }

    cout << maxJoy << '\n';
    return 0;
}
