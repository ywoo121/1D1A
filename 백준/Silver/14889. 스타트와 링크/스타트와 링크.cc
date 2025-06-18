#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

int N;
int S[20][20];      
bool team[20];      
int answer = INT_MAX;

void sol(int idx, int cnt) {
    if (cnt == N / 2) {
        int start = 0, link = 0;

        // 능력치
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (team[i] && team[j]) {
                    start += S[i][j];
                }
                if (!team[i] && !team[j]) {
                    link += S[i][j];
                }
            }
        }

        int diff = abs(start - link);
        if (diff < answer) answer = diff;
        return;
    }

    for (int i = idx; i < N; i++) {
        if (!team[i]) {
            team[i] = true;
            sol(i + 1, cnt + 1);
            team[i] = false;
        }
    }
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> N;

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> S[i][j];

    sol(0, 0);

    cout << answer << '\n';
}