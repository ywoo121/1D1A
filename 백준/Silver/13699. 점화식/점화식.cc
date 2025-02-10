#include <iostream>
#include <vector>
using namespace std;

long long dp[35];

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n; cin >> n;
    dp[0] = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            dp[i] += dp[j] * dp[i-j-1];
		}
    }
    cout << dp[n];
}

// 문제 점화식: t(n)=t(0)*t(n-1) + t(1)*t(n-2) + ... + t(n-1)*t(0)