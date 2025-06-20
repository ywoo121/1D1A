#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int N, m, M, T, R;
    cin >> N >> m >> M >> T >> R;

    if (m + T > M) {
        cout << -1 << '\n'; 
        return 0;
    }

    int pulse = m;
    int time = 0;
    int exercise = 0;

    while (exercise < N) {
        if (pulse + T <= M) {
            pulse += T;
            exercise++;
        } else {
            pulse -= R;
            if (pulse < m) pulse = m;
        }
        time++;
    }

    cout << time << '\n';
}
