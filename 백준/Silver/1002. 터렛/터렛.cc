//  터렛

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;

    while (T--) {
        int x1, y1, r1, x2, y2, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        int dx = x1 - x2;
        int dy = y1 - y2;
        int d2 = dx * dx + dy * dy;

        int sum = r1 + r2;
        int diff = r1 - r2;
        int sum2 = sum * sum;
        int diff2 = diff * diff;

        if (d2 == 0 && r1 == r2) {
            cout << -1 << '\n';   
        } else if (d2 > sum2) {
            cout << 0 << '\n';    
        } else if (d2 < diff2) {
            cout << 0 << '\n';    
        } else if (d2 == sum2) {
            cout << 1 << '\n';    
        } else if (d2 == diff2) {
            cout << 1 << '\n';    
        } else {
            cout << 2 << '\n';    
        }
    }
    return 0;
}
