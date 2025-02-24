#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int n, t_score, p;
    cin >> n >> t_score >> p;

    vector<int> score;

    for (int i = 0; i < n; i++) {
        int s;
        cin >> s;
        score.push_back(s);
    }

    if (n == p && t_score <= score[n-1]) {
        cout << -1;
        return 0;
    }

    score.push_back(t_score);
    sort(score.rbegin(), score.rend());

    int rank = 1;
    for (int i = 0; i < score.size(); i++) {
        if (score[i] == t_score) {
            cout << rank;
            return 0;
        }
        if (i < score.size() - 1 && score[i] > score[i + 1]) {
            rank = i + 2;
        }
    }
    return 0;
}
