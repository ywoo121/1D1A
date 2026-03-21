#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    // 수의 개수
    int n; cin >> n;

    // 합을 구해야 하는 횟수
    int m; cin >> m;

    // 구간합 배열
    vector<int> s(n, 0);

    // 구간합 구하기
    for (int i = 1; i <= n; i++) {
        int tmp; cin >> tmp;
        s[i] = s[i-1] + tmp;
    }

    for (int i = 0; i < m; i++) {
        int start, end;
        cin >> start >> end;

        cout << s[end] - s[start-1] << '\n';
    }
}