#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;

    vector<long long> v(N);
    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int ans = 0;

    for (int i = 0; i < N; i++) {
        long long K = v[i];
        int start = 0;
        int end = N - 1;

        while (start < end) {
            if (start == i) {
                start++;
                continue;
            }
            if (end == i) {
                end--;
                continue;
            }

            long long sum = v[start] + v[end];

            if (sum == K) {
                ans++;
                break;
            } else if (sum < K) {
                start++;
            } else {
                end--;
            }
        }
    }

    cout << ans;
}