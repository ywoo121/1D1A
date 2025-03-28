#include <iostream>
using namespace std;

long long dp[91];

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n; cin >> n;
    dp[1] = 1; dp[2] = 1;
    for (int i = 3; i <= n; i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }
    cout << dp[n] << '\n';

}