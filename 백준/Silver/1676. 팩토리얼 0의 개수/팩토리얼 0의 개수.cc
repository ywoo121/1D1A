#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n; cin >> n;
    int cnt = 0;

    for (int i = 5; i <= n; i *= 5) {
        cnt += (n / i);
    }
    cout << cnt;
}
