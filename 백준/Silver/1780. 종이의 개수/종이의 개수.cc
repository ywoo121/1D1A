#include <iostream>
using namespace std;

int paper[2187][2187];
int cnt[3];

bool isSameNumber(int x, int y, int size) {
    int num = paper[x][y];

    for (int i = x; i < x + size; i++) {
        for (int j = y; j < y + size; j++) {
            // 숫자가 다르면
            if (paper[i][j] != num) return false;
        }
    }

    // 숫자가 다 같음녀
    return true;
}

void sol(int x, int y, int size) {
    // 모두 같은지 판단
    if (isSameNumber(x, y, size)) {
        // 같으면
        int num = paper[x][y];
        cnt[num+1]++;
        return;
    }

    // 다르면 다시 분할
    int newSize = size / 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sol(x + i * newSize, y + j * newSize, newSize);
        }
    }
}

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int N; cin >> N;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> paper[i][j];
        }
    }

    sol(0, 0, N);

    for (int i = 0; i < 3; i++) {
        cout << cnt[i] << '\n';
    }
}