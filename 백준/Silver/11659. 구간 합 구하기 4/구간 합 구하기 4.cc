#include <iostream>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int N, M;
    int tmp;

    cin >> N >> M;          // N: 데이터의 개수, M: 질의 개수
    int s[100001] = {0};   // 구간합을 넣을 배열

    // 구간합 구하기
    for (int i = 1; i <= N; i++) {
        cin >> tmp;
        s[i] = s[i-1] + tmp;
    }

    // 질의
    for (int i = 0; i < M; i++) {
        int a, b;

        cin >> a >> b;

        cout << s[b] - s[a-1] << '\n';
    }
}