#include <iostream>
#include <algorithm>
using namespace std;

int dp[100001];
int arr[100001];

int main(void) {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n; cin >> n;   

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    dp[1] = arr[1];
    int ans = dp[1];
    for (int i = 2; i <= n; i++) {
        dp[i] = max(dp[i - 1] + arr[i], arr[i]);
        ans = max(ans, dp[i]);
    }
    cout << ans << '\n';
}