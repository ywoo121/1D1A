#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);   

    int n; cin >> n;

    vector<int> v(n);
    vector<int> dp(n, 1);

    // 값 삽입
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // dp 배열 계산
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (v[j] < v[i]) {
                dp[i] = max(dp[i], dp[j]+1);
            }
        }
    }
    cout << *max_element(dp.begin(), dp.end()) << '\n';
}