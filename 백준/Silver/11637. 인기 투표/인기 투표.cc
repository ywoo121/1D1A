#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int t; cin >> t;

    for (int i = 0; i < t; i++) {
        int n; cin >> n;

        int sum = 0;
        int max_vote = 0, max_idx = 0, max_count = 0;
        int votes[11]; 

        for (int j = 1; j <= n; j++) {
            cin >> votes[j];
            sum += votes[j];

            if (votes[j] > max_vote) {
                max_vote = votes[j];
                max_idx = j;
                max_count = 1;
            } else if (votes[j] == max_vote) {
                max_count++;
            }
        }

        if (max_count > 1) {
            cout << "no winner\n";
        } else if (max_vote > sum / 2) {
            cout << "majority winner " << max_idx << '\n';
        } else {
            cout << "minority winner " << max_idx << '\n';
        }
    }

    return 0;
}
