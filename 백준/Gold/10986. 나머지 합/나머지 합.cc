#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n, m;
    cin >> n >> m;

    long ans = 0;

    // 구간합 
    vector<long> S(n+1, 0);

    // 나머지
    vector<long> C(m, 0);

    // 구간합 입력
    for (int i = 1; i <= n; i++) {
        int tmp; cin >> tmp;
        S[i] = S[i-1] + tmp;
    }

    for (int i = 1; i <= n; i++) {
        int res = S[i] % m;

        // 나머지가 0일 경우
        if (res == 0) ans++;

        // 나머지의 개수
        C[res]++;
    }

    for (int i = 0; i < m; i++) {
        if (C[i] > 1) {
            ans += C[i] * (C[i]-1) / 2;
        }
    }

    cout << ans;

}