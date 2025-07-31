#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int N; cin >> N;        // 레벨의 수
    vector<int> scores(N);

    for (int i = 0; i < N; i++) {
        cin >> scores[i];
    }

    int ttl = 0;

    for (int i = N - 2; i >= 0; --i) {
        if (scores[i] >= scores[i + 1]) {
            int new_score = scores[i + 1] - 1;
            ttl += scores[i] - new_score;
            scores[i] = new_score;
        }
    }

    cout << ttl;
}