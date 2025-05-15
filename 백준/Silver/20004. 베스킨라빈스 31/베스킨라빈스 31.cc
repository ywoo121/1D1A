#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int a; cin >> a;

    for (int i = 1; i <= a; i++) {
        if (30 % (i+1) == 0) {
            cout << i << '\n';
        }
    }
}