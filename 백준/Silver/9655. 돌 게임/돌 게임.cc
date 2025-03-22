#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    
    int n; cin >> n;
    int remain = n; // 남은 거

    while (remain >= 0) {
        // 상근
        if (remain >= 3) {
            remain -= 3;
            if (remain == 0) {
                cout << "SK";
                break;
            }
        } else {
            remain -= 1;
            if (remain == 0) {
                cout << "SK";
                break;
            }
        }

        // 창영
        if (remain >= 3) {
            remain -= 3;
            if (remain == 0) {
                cout << "CY";
                break;
            }
        } else {
            remain -= 1;
            if (remain == 0) {
                cout << "CY";
                break;
            }
        }

    }
}