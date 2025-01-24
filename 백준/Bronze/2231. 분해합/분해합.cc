#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n; cin >> n;
    
    for (int i = 1; i < n; i++) {
        int tmp = i;   
        int sum = i;
        while (tmp != 0) {
            sum += tmp % 10;
            tmp /= 10;
        }

        if (sum == n) {
            cout << i << '\n';
            return 0;
        }
    }
    cout << 0 << '\n';
}