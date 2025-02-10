#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int a, b; cin >> a >> b;

    int cnt = 0;    // 연산 최솟값

    while (true) {
        if (a == b) {
            cout << cnt+1 << '\n';
            return 0;
        } else if (a > b) {
            cout << "-1" << '\n';
            return 0;
        }

        if (b % 2 == 0) {
            b /= 2;
        } else if (b % 10 == 1) {
            b /= 10;
        } else {
            cout << "-1" << '\n';
            return 0;
        }
        cnt ++;
    }
    return 0;
}