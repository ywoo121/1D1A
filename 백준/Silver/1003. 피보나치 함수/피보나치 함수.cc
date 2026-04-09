//  피보나치 함수

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int zero[41] = {1, 0,};
    int one[41] = {0, 1,};
    int T, n;

    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> n;
        for (int j = 2; j <= n; j++) {
            zero[j] = zero[j - 1] + zero[j - 2];
            one[j] = one[j - 1] + one[j - 2];
        }

        cout << zero[n] << " " << one[n] << '\n';
    }
}
