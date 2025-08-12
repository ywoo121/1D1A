#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);   
    
    int N, K;
    if (!(cin >> N)) return 0;
    cin >> K;

    vector<bool> is_prime(N + 1, true);
    if (N >= 0) is_prime[0] = false;
    if (N >= 1) is_prime[1] = false;
    for (int i = 2; 1LL * i * i <= N; ++i) {
        if (is_prime[i]) {
            for (long long j = 1LL * i * i; j <= N; j += i) is_prime[j] = false;
        }
    }

    vector<char> bad(N + 1, 0);
    for (int p = K + 1; p <= N; ++p) {
        if (is_prime[p]) {
            for (int m = p; m <= N; m += p) bad[m] = 1;
        }
    }

    int ans = 0;
    for (int i = 1; i <= N; ++i) if (!bad[i]) ++ans;

    cout << ans << '\n';
}