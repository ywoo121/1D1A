#include <iostream>
#include <algorithm>

using namespace std;

int duration[16], profit[16], dp[16] = {0,};

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(0); 
 
    int n; cin >> n;

    for (int day = 1; day <= n; day++) {
        cin >> duration[day] >> profit[day];
    }

    for (int day = n; day > 0; day--) {
        if (day + duration[day] - 1 > n) {
            dp[day] = dp[day + 1]; 
        } else {
            dp[day] = max(profit[day] + dp[day + duration[day]], dp[day + 1]);
        }
    }

    cout << dp[1] << '\n';
}
