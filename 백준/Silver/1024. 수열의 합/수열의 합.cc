#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n, l; cin >> n >> l;

    for (int i = l; i <= 100; i++) {
        int tmp = n-i*(i+1)/2;

        if (tmp % i == 0) {
            int j = tmp / i + 1;

            if (j >= 0) {
                for (int k = 0; k < i; k++) {
                    cout << k + j << " ";
                }
                cout << '\n';
                return 0;
            }
        }
    }
    cout << -1 << '\n';
}