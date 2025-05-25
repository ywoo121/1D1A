#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n, f; cin >> n >> f;
    int ans;
    n -= n % 100;

    for (int i = 0; i < 100; i++) {
        if ((n + i) % f == 0) {
            ans = i;
            break;
        }
    }

    if (ans < 10) {
        cout << 0;
    }
    cout << ans;
}